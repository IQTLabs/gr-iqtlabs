import pmt
from gnuradio import gr


class pdu_logger_block(gr.sync_block):
    def __init__(self):
        gr.sync_block.__init__(
            self,
            name="pdu_decoder",
            in_sig=[],
            out_sig=[],
        )
        self.message_port_register_in(pmt.intern("pdu"))
        self.set_msg_handler(pmt.intern("pdu"), self.receive_pdu)
        self.pdu_log = []

    def receive_pdu(self, pdu):
        self.pdu_log.append((bytes(pmt.to_python(pmt.cdr(pdu)))))
