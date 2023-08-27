#pragma once

#include <string>
#include <cstdint>
#include <vector>

using namespace std;

class ByteSerializer
{
public:
  static bool serialize(
    const int8_t & var_char, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const uint8_t & var_uchar, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const int16_t & var_short, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const uint16_t & var_ushort, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const int32_t & var_int, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const uint32_t & var_uint, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const int64_t & var_long, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const uint64_t & var_ulong, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const float & var_float, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const double & var_double, std::vector<uint8_t> & bytes, bool is_little_endian = true);

  static bool serialize(
    const std::string & var_string, std::vector<uint8_t> & bytes);
};