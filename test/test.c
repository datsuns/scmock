#include <assert.h>
#include <stdio.h>
#include <string.h>

#include <scmock.h>

SCMOCK_DECLARE( hello )
SCMOCK_DECLARE_P1( hello2, char* )
SCMOCK_DECLARE_RET( char, hello3 )
SCMOCK_DECLARE_P2( hello4, char*, int )
SCMOCK_DECLARE_RET_P1( char, hello5, int )
SCMOCK_DECLARE_RET_P2( char*, hello6, int, char* )

int main(void){
  hello();

  hello2("hello");
  assert( strcmp(SCMOCK_PARAM(hello2), "hello") == 0 );

  SCMOCK_SET_RET(hello3, 1);
  assert(hello3() == 1);
  SCMOCK_SET_RET(hello3, 2);
  assert(hello3() == 2);

  hello4("abc", 10);
  assert( strcmp(SCMOCK_PARAM_0(hello4), "abc") == 0 );
  assert( SCMOCK_PARAM_1(hello4) == 10 );

  SCMOCK_SET_RET(hello5, 1);
  assert(hello5(10) == 1);
  assert( SCMOCK_PARAM(hello5) == 10 );

  SCMOCK_SET_RET(hello6, "ret");
  assert( strcmp(hello6(5, "param"), "ret") == 0 );
  assert( SCMOCK_PARAM_0(hello6) == 5 );
  assert( strcmp(SCMOCK_PARAM_1(hello6), "param") == 0 );
  return 0;
}
