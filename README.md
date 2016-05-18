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
declare a mock of *API name*. after this you can call that API.

### SCMOCK_DECLARE_P1( *API name*, *param type* )
declare a mock of *API name* that has 1 parameter.

### SCMOCK_DECLARE_P2( *API name*, *param type1*, *param type2* )
declare a mock of *API name* that has 2 parameters.

### SCMOCK_DECLARE_RET( *return type*, *API name* )
declare a mock of *API name* that has return value as *return type*.

### SCMOCK_DECLARE_RET_P1( *return type*, *API name*, *param type* )
declare a mock of *API name* that has return value as *return type* and has 1 parameter.

### SCMOCK_DECLARE_RET_P2( *return type*, *API name*, *param type1*, *param type2* )
declare a mock of *API name* that has return value as *return type* and has 2 parameters.

## Called Paramaeter Accessor

### SCMOCK_PARAM( *API name* )
access called parameter of API.  
*NOTE* take care for **pointer** parameter. this mock just **copy** to hold the parameter such as
```c
void mock_declaration( char* param ){
  to_hold_param = param;
}
```

### SCMOCK_PARAM_1( *API name* )
access the 1st called parameter.

### SCMOCK_PARAM_2( *API name* )
access the 2nd called parameter.

## Returned Value Configuration

### SCMOCK_SET_RET( *API name*, *value* )
set the returned value for API.
