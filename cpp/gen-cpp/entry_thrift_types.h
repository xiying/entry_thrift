/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef entry_thrift_TYPES_H
#define entry_thrift_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace entry {

class ThriftPkg;

typedef struct _ThriftPkg__isset {
  _ThriftPkg__isset() : ret(false), data(false) {}
  bool ret :1;
  bool data :1;
} _ThriftPkg__isset;

class ThriftPkg {
 public:

  static const char* ascii_fingerprint; // = "71DA0ECCE646530E6545B34A6E55E5F9";
  static const uint8_t binary_fingerprint[16]; // = {0x71,0xDA,0x0E,0xCC,0xE6,0x46,0x53,0x0E,0x65,0x45,0xB3,0x4A,0x6E,0x55,0xE5,0xF9};

  ThriftPkg(const ThriftPkg&);
  ThriftPkg& operator=(const ThriftPkg&);
  ThriftPkg() : ret(0), main_cmd(0), sub_cmd(0), data() {
  }

  virtual ~ThriftPkg() throw();
  int32_t ret;
  int32_t main_cmd;
  int32_t sub_cmd;
  std::string data;

  _ThriftPkg__isset __isset;

  void __set_ret(const int32_t val);

  void __set_main_cmd(const int32_t val);

  void __set_sub_cmd(const int32_t val);

  void __set_data(const std::string& val);

  bool operator == (const ThriftPkg & rhs) const
  {
    if (__isset.ret != rhs.__isset.ret)
      return false;
    else if (__isset.ret && !(ret == rhs.ret))
      return false;
    if (!(main_cmd == rhs.main_cmd))
      return false;
    if (!(sub_cmd == rhs.sub_cmd))
      return false;
    if (__isset.data != rhs.__isset.data)
      return false;
    else if (__isset.data && !(data == rhs.data))
      return false;
    return true;
  }
  bool operator != (const ThriftPkg &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ThriftPkg & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const ThriftPkg& obj);
};

void swap(ThriftPkg &a, ThriftPkg &b);

} // namespace

#endif
