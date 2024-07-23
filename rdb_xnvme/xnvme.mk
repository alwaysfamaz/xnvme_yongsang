# xnvme.mk
XNVME_DIR=/path/to/xNVMe

.PHONY: all clean

all: libxnvme.a

libxnvme.a:
    $(MAKE) -C $(XNVME_DIR) all

clean:
    $(MAKE) -C $(XNVME_DIR) clean
