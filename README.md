# Simple Mock for C language

# goal
- mocking API(s) only w/ including **one** header file.
- **easy to use** is more important than *many features*

# install
- copy the [scmock.h](https://github.com/datsuns/scmock/blob/master/scmock.h) into your test directory
- add include ``` #include <scmock.h>```
- Thats's all !!

# APIs
## Mock Definiton
### SCMOCK_DECLARE( *API name* )
### SCMOCK_DECLARE_P1( *API name*, *param type* )
### SCMOCK_DECLARE_P2( *API name*, *param type1*, *param type2* )
### SCMOCK_DECLARE_RET( *return type*, *API name* )
### SCMOCK_DECLARE_RET_P1( *return type*, *API name*, *param type* )
### SCMOCK_DECLARE_RET_P2( *return type*, *API name*, *param type1*, *param type2* )
## Called Paramaeter Accessor
## Returned Value Configuration
