#ifndef BASE_STATION_H
#define BASE_STATION_H

typedef nx_struct base_msg {
  nx_uint64_t num1;
  nx_uint64_t num2;
  nx_uint64_t num3;
}base_msg_t;

enum {
  AM_BASE_MSG = 100
};

#endif
