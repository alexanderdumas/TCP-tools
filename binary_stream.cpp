#include "binary_stream.h"

bool ByteSerializer::serialize(
  const int8_t & var_char, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  Char common_char = {.v = var_char};
  bytes.emplace_back(common_char.ch);
  return true;
}

bool ByteSerializer::serialize(
  const uint8_t & var_uchar, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  UChar common_uchar = {.v = var_uchar};
  bytes.emplace_back(common_uchar.ch);
  return true;
}

bool ByteSerializer::serialize(
  const int16_t & var_short, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  Short common_short = {.v = var_short};
  if (is_little_endian) {
    bytes.emplace_back(common_short.ch[0]);
    bytes.emplace_back(common_short.ch[1]);
  } else {
    bytes.emplace_back(common_short.ch[1]);
    bytes.emplace_back(common_short.ch[0]);
  }
  return true;
}

bool ByteSerializer::serialize(
  const uint16_t & var_ushort, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  UShort common_ushort = {.v = var_ushort};
  if (is_little_endian) {
    bytes.emplace_back(common_ushort.ch[0]);
    bytes.emplace_back(common_ushort.ch[1]);
  } else {
    bytes.emplace_back(common_ushort.ch[1]);
    bytes.emplace_back(common_ushort.ch[0]);
  }
  return true;
}

bool ByteSerializer::serialize(
  const int32_t & var_int, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  Int common_int = {.v = var_int};
  if (is_little_endian) {
    bytes.emplace_back(common_int.ch[0]);
    bytes.emplace_back(common_int.ch[1]);
    bytes.emplace_back(common_int.ch[2]);
    bytes.emplace_back(common_int.ch[3]);
  } else {
    bytes.emplace_back(common_int.ch[3]);
    bytes.emplace_back(common_int.ch[2]);
    bytes.emplace_back(common_int.ch[1]);
    bytes.emplace_back(common_int.ch[0]);
  }
  return true;
}

bool ByteSerializer::serialize(
  const uint32_t & var_uint, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  UInt common_uint = {.v = var_uint};
  if (is_little_endian) {
    bytes.emplace_back(common_uint.ch[0]);
    bytes.emplace_back(common_uint.ch[1]);
    bytes.emplace_back(common_uint.ch[2]);
    bytes.emplace_back(common_uint.ch[3]);
  } else {
    bytes.emplace_back(common_uint.ch[3]);
    bytes.emplace_back(common_uint.ch[2]);
    bytes.emplace_back(common_uint.ch[1]);
    bytes.emplace_back(common_uint.ch[0]);
  }
  return true;
}

bool ByteSerializer::serialize(
  const int64_t & var_long, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  Long common_long = {.v = var_long};
  if (is_little_endian) {
    bytes.emplace_back(common_long.ch[0]);
    bytes.emplace_back(common_long.ch[1]);
    bytes.emplace_back(common_long.ch[2]);
    bytes.emplace_back(common_long.ch[3]);
    bytes.emplace_back(common_long.ch[4]);
    bytes.emplace_back(common_long.ch[5]);
    bytes.emplace_back(common_long.ch[6]);
    bytes.emplace_back(common_long.ch[7]);
  } else {
    bytes.emplace_back(common_long.ch[7]);
    bytes.emplace_back(common_long.ch[6]);
    bytes.emplace_back(common_long.ch[5]);
    bytes.emplace_back(common_long.ch[4]);
    bytes.emplace_back(common_long.ch[3]);
    bytes.emplace_back(common_long.ch[2]);
    bytes.emplace_back(common_long.ch[1]);
    bytes.emplace_back(common_long.ch[0]);
  }
  return true;
}

bool ByteSerializer::serialize(
  const uint64_t & var_ulong, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  ULong common_ulong = {.v = var_ulong};
  if (is_little_endian) {
    bytes.emplace_back(common_ulong.ch[0]);
    bytes.emplace_back(common_ulong.ch[1]);
    bytes.emplace_back(common_ulong.ch[2]);
    bytes.emplace_back(common_ulong.ch[3]);
    bytes.emplace_back(common_ulong.ch[4]);
    bytes.emplace_back(common_ulong.ch[5]);
    bytes.emplace_back(common_ulong.ch[6]);
    bytes.emplace_back(common_ulong.ch[7]);
  } else {
    bytes.emplace_back(common_ulong.ch[7]);
    bytes.emplace_back(common_ulong.ch[6]);
    bytes.emplace_back(common_ulong.ch[5]);
    bytes.emplace_back(common_ulong.ch[4]);
    bytes.emplace_back(common_ulong.ch[3]);
    bytes.emplace_back(common_ulong.ch[2]);
    bytes.emplace_back(common_ulong.ch[1]);
    bytes.emplace_back(common_ulong.ch[0]);
  }
  return true;
}

bool ByteSerializer::serialize(
  const float & var_float, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  Float common_float = {.v = var_float};
  if (is_little_endian) {
    bytes.emplace_back(common_float.ch[0]);
    bytes.emplace_back(common_float.ch[1]);
    bytes.emplace_back(common_float.ch[2]);
    bytes.emplace_back(common_float.ch[3]);
  } else {
    bytes.emplace_back(common_float.ch[3]);
    bytes.emplace_back(common_float.ch[2]);
    bytes.emplace_back(common_float.ch[1]);
    bytes.emplace_back(common_float.ch[0]);
  }
  return true;
}

bool ByteSerializer::serialize(
  const double & var_double, std::vector<uint8_t> & bytes, bool is_little_endian)
{
  Double common_double = {.v = var_double};
  if (is_little_endian) {
    bytes.emplace_back(common_double.ch[0]);
    bytes.emplace_back(common_double.ch[1]);
    bytes.emplace_back(common_double.ch[2]);
    bytes.emplace_back(common_double.ch[3]);
    bytes.emplace_back(common_double.ch[4]);
    bytes.emplace_back(common_double.ch[5]);
    bytes.emplace_back(common_double.ch[6]);
    bytes.emplace_back(common_double.ch[7]);
  } else {
    bytes.emplace_back(common_double.ch[7]);
    bytes.emplace_back(common_double.ch[6]);
    bytes.emplace_back(common_double.ch[5]);
    bytes.emplace_back(common_double.ch[4]);
    bytes.emplace_back(common_double.ch[3]);
    bytes.emplace_back(common_double.ch[2]);
    bytes.emplace_back(common_double.ch[1]);
    bytes.emplace_back(common_double.ch[0]);
  }
  return true;
}

bool ByteSerializer::serialize(
  const std::string & var_string, std::vector<uint8_t> & bytes )
{
  for(size_t i=0; i<var_string.size(); i++){
    bytes.emplace_back((uint8_t)var_string[i]);
  }
  return true;
}