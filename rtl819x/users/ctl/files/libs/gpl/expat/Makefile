include $(CTL_DIR)/global.def

CFLAGS+=-I. 
#expat.h

LIB_A=libexpat.a
LIB_SO=libexpat.so
OBJS=xmlparse.o xmlrole.o xmltok.o

#config.h xmltok.h xmlrole.h ascii.h nametab.h xmltok_impl.h \
#  xmltok_impl.c asciitab.h utf8tab.h iasciitab.h latin1tab.h xmltok_ns.c

all: $(LIB_A)

ifeq ($(TARGET_PLATFORM),BHR2)
$(LIB_A): $(OBJS)
	$(AR) crv $@ $^ $(LDFLAGS)
	mkdir -p $(TARGET_DIR)/lib/
	cp $(LIB_A) $(TARGET_DIR)/lib
	mkdir -p $(CTL_DIR)/include/expat
	cp *.h $(CTL_DIR)/include/expat/
.c.o:
	$(RCC) -c -o $@ $(CFLAGS) $(IFLAGS) $<

else
$(LIB_A): $(OBJS)
	$(AR) -rcs $@ $^
	mkdir -p $(TARGET_DIR)/lib/
	cp $(LIB_A) $(TARGET_DIR)/lib
	mkdir -p $(CTL_DIR)/include/expat
	cp *.h $(CTL_DIR)/include/expat/
endif

clean:
	rm -f $(OBJS) $(LIB_A)
	rm -f $(TARGET_DIR)/lib/$(LIB_A)
	rm -rf $(CTL_DIR)/include/expat

#include $(BUILD_DIR)/make.deprules

#-include $(OBJS:.o=.d)
