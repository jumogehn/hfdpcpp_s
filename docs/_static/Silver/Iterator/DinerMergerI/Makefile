
all:
	g++ DinerMergerI.cpp \
	-DACE_HAS_WCHAR=1 \
	-DACE_NTRACE=0 \
	-I$(HLM_ROOT)/include \
	-I$(ACE_ROOT) \
	-L$(HLM_ROOT)/lib \
	-L$(ACE_ROOT)/lib \
	-lACE \
	-lHLM

clean:
	rm -f a.out

