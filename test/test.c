#include <assert.h>
#include <stdio.h>

#include <scmock.h>

SCMOCK_DECLARE( hello )

int main(void){
  hello();
  return 0;
}
