#!/usr/bin/env python3

import glob
from gnuradio.grc.core.io import yaml
from gnuradio.grc.core import blocks, schema_checker

scheme = schema_checker.BLOCK_SCHEME
checker = schema_checker.Validator(scheme)

for block_path in glob.glob("grc/*.yml"):
    with open(block_path) as file_data:
        data = yaml.safe_load(file_data)
        checker = schema_checker.Validator(scheme)
        checker.run(data)
        if checker.messages:
            print(block_path, checker.messages)
            raise ValueError
        blocks.build(**data)
