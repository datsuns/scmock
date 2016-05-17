#ifndef SIMPLE_C_MOCK_H_INCLUDED
#define SIMPLE_C_MOCK_H_INCLUDED

//--------------------------------
// basic definition
#define SCMOCK_PARAM(name, n)                  _scmock_param_##name##_##n
#define SCMOCK_DECLARE_PARAM(name, type, n)    type SCMOCK_PARAM(name, n)
#define SCMOCK_RET(name)                        _scmock_ret_##name
#define SCMOCK_SET_RET(name, v)                 SCMOCK_RET(name) = v

//--------------------------------
// no return value mocks
#define SCMOCK_DECLARE(name)  \
  void name( void ){}

#define SCMOCK_DECLARE_P1(name, type0)    \
  SCMOCK_DECLARE_PARAM(name, type0, 0);   \
  void name(type0 p){                     \
    SCMOCK_PARAM(name, 0) = p;            \
  }

#define SCMOCK_DECLARE_P2(name, type0, type1)     \
  SCMOCK_DECLARE_PARAM(name, type0, 0);    \
  SCMOCK_DECLARE_PARAM(name, type1, 1);    \
  void name(type0 p0, type1 p1){           \
    SCMOCK_PARAM(name, 0) = p0;            \
    SCMOCK_PARAM(name, 1) = p1;            \
  }

//--------------------------------
// has return value
#define SCMOCK_DECLARE_RET_VAL(ret_type, name)  ret_type SCMOCK_RET(name)

#define SCMOCK_DECLARE_RET(ret_type, name)  \
  SCMOCK_DECLARE_RET_VAL(ret_type, name);   \
  ret_type name( void ){                    \
    return SCMOCK_RET(name);                \
  }

#define SCMOCK_DECLARE_RET_P1(ret_type, name, type0)  \
  SCMOCK_DECLARE_PARAM(name, type0, 0);     \
  SCMOCK_DECLARE_RET_VAL(ret_type, name);   \
  ret_type name(type0 p0){                  \
    SCMOCK_PARAM(name, 0) = p0;             \
    return SCMOCK_RET(name);                \
  }


#endif
