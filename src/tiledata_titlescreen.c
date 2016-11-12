#include "tiledata_titlescreen.h"

// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: t1.png
// Pixel Width: 80px
// Pixel Height: 144px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int t1_tile_map_size = 0xB4;
const int t1_tile_map_width = 0x0A;
const int t1_tile_map_height = 0x12;

const int t1_tile_data_size = 0x0350;
const int t1_tile_count = 0xB4;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char t1_map_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,
  0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x05,0x06,0x00,0x00,0x00,0x00,0x07,0x08,
  0x09,0x0A,0x0B,0x0C,0x00,0x00,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x0C,0x00,0x00,
  0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,
  0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x00,0x00,0x00,0x30,
  0x31,0x32,0x33,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char t1_tile_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE8,0x10,0x04,0xF8,
  0x00,0x00,0x18,0x00,0x30,0x00,0x10,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x0F,0x00,
  0x07,0x00,0x0B,0x04,0x0B,0x04,0x01,0x06,0x0D,0x02,0x9F,0x00,0xFF,0x00,0x70,0xFF,
  0xC4,0x03,0x8A,0x47,0xA0,0x5F,0x00,0xFF,0x00,0xFF,0x80,0x7F,0xC0,0x3F,0x60,0x9F,
  0x07,0xF8,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x0C,0xFF,0x7F,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x3E,0x01,0x38,0x07,0x00,0x1F,0x01,0x1F,
  0x1C,0x03,0x21,0x1F,0x1F,0x3F,0x3F,0x1F,0x6F,0x9F,0x0F,0xFF,0x0F,0xFF,0xFF,0xFF,
  0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0x9F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,
  0x01,0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x41,0x00,0xF0,0x00,0x00,0xF0,0x10,0xE0,
  0x10,0xE0,0x18,0xF0,0x07,0xF8,0xA1,0xDF,0xA1,0xDF,0xC3,0x0F,0x0F,0x07,0x03,0x07,
  0x20,0x1F,0x40,0x3F,0x00,0xFF,0x83,0xFF,0xCF,0xFF,0xDF,0xFF,0xBC,0xFF,0x3E,0xFF,
  0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xE0,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0x17,0xFF,0x02,0xFF,0x00,0xFF,
  0x3F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0x3F,0xFF,0x1F,0xFF,0x0F,0xFF,
  0x00,0x07,0x09,0x06,0x19,0x0F,0x09,0x1F,0x01,0x1E,0x13,0x0C,0x2C,0x13,0x01,0x3F,
  0x10,0xE0,0x58,0x80,0x1C,0x80,0x8F,0x00,0x1F,0x00,0x1F,0x00,0xFF,0x00,0x66,0x99,
  0x04,0x03,0x04,0x03,0x08,0x07,0xF8,0x07,0xF0,0x0F,0x80,0x7F,0x00,0xFF,0x00,0xFF,
  0x7E,0xFF,0x7C,0xFF,0x3C,0xFF,0x1C,0xFF,0x0F,0xFF,0x1F,0xFF,0x7F,0xFF,0xFF,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0xC0,0xFF,0xE0,0xFF,
  0x0E,0xFF,0x3E,0xFF,0x7E,0xFF,0xFE,0xFF,0xFC,0xFF,0xFD,0xFE,0x1C,0xFF,0x04,0xFF,
  0x0F,0xFF,0x01,0xFF,0x80,0x7F,0x80,0x7F,0xE0,0x1F,0x80,0x7F,0x80,0x7F,0xC0,0x3F,
  0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFC,
  0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x1F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,
  0x00,0x00,0x0F,0x00,0x0F,0x1F,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x3F,0x7F,0xFF,0x7F,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x20,0xDF,0x80,0xFF,0x80,0xFF,0x81,0xFF,0x83,0xFF,0x8F,0xFF,0x8F,0xFF,0x9F,0xFF,
  0x0D,0xFF,0x1F,0xFF,0x3F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x03,0xFF,0x08,0xFF,0x08,0xFF,0x00,0xFF,
  0xF4,0xFF,0xF0,0xFF,0xE0,0xFF,0xE0,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x04,0xFF,0x06,0xFF,0x06,0xFF,0x00,0xFF,0x00,0xFF,0x1C,0xE3,0x3F,0xC0,0x7F,0x80,
  0xC0,0x3F,0x40,0xBF,0x40,0xBF,0x30,0xCF,0x1F,0xE0,0x1F,0xE0,0xDF,0x20,0xFF,0x00,
  0x07,0xF8,0x0F,0xF0,0x3F,0xC0,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFE,0x01,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x3F,0xFF,0xCF,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xE7,0xFF,0x00,0xFF,0xF8,0x07,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x9F,0xFF,0x0F,0xFF,0x07,0xFF,0x80,0x7F,0x80,0x7F,0x40,0x3F,0x20,0x1F,0x23,0x1C,
  0xF0,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x1F,0xE0,0x7F,0x80,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x01,0xFE,0x0F,0xF0,0x3F,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x08,0xF7,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF9,0x00,0xE1,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xF8,0x00,0xF0,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x03,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x30,0x00,
  0x7F,0x00,0x7F,0x00,0x0F,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFD,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x81,0x00,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xF0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: t2.png
// Pixel Width: 80px
// Pixel Height: 144px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int t2_tile_map_size = 0xB4;
const int t2_tile_map_width = 0x0A;
const int t2_tile_map_height = 0x12;

const int t2_tile_data_size = 0x0600;
const int t2_tile_count = 0xB4;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char t2_map_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x00,0x00,0x00,0x00,0x05,0x06,
  0x07,0x08,0x09,0x0A,0x00,0x00,0x03,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x00,0x00,
  0x12,0x13,0x14,0x15,0x10,0x16,0x10,0x10,0x00,0x00,0x17,0x18,0x19,0x1A,0x1B,0x1C,
  0x1D,0x1E,0x00,0x00,0x00,0x1F,0x20,0x21,0x22,0x23,0x10,0x10,0x00,0x00,0x24,0x25,
  0x26,0x27,0x28,0x29,0x10,0x10,0x2A,0x2B,0x2C,0x2D,0x21,0x21,0x2E,0x10,0x10,0x10,
  0x2F,0x30,0x31,0x32,0x21,0x21,0x33,0x10,0x10,0x10,0x10,0x10,0x34,0x35,0x21,0x21,
  0x36,0x37,0x38,0x39,0x10,0x3A,0x3B,0x21,0x3C,0x3D,0x3E,0x3F,0x40,0x21,0x41,0x42,
  0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x21,0x4A,0x4B,0x4C,0x4A,0x4A,0x4D,0x4E,0x21,
  0x21,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x00,0x00,0x00,0x5A,
  0x5B,0x00,0x5C,0x4A,0x4A,0x4A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5D,0x5E,0x5F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char t2_tile_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x1F,0x00,0x3F,0x00,0x3F,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0xE0,0x00,0xF0,0x00,0xFC,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0xFF,0x00,0xE7,0x00,
  0x3B,0x04,0x31,0x0E,0x18,0x07,0x18,0x07,0x38,0x07,0x10,0x0F,0x90,0x0F,0x20,0x1F,
  0x8F,0x70,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x10,0xFF,0x00,0xFF,0x00,0xFF,0x0F,0xFF,
  0xFE,0x01,0x7C,0x83,0x04,0xFB,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFC,0xFF,
  0xFC,0x00,0x3E,0xC0,0x0F,0xF0,0x00,0xFF,0x00,0xFF,0x30,0xFF,0x1E,0xFF,0x1F,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xF8,0x00,
  0x03,0x00,0x07,0x00,0x0E,0x01,0x1C,0x03,0x3C,0x03,0x38,0x07,0x70,0x0F,0x70,0x0F,
  0xE6,0x00,0x40,0x80,0x40,0x80,0x40,0x81,0x43,0x81,0xFD,0x03,0x03,0xFF,0x07,0xFF,
  0x40,0x3F,0x83,0x7F,0x0F,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x07,0x00,0x0F,0x00,0x0F,0x00,0x0F,0x00,0x0B,0x00,0x07,0x00,0x03,0x00,0x03,0x00,
  0xFC,0x00,0xFE,0x00,0xFE,0x00,0xE3,0x1C,0xC3,0x3C,0xC1,0x3E,0xC0,0x3F,0xE0,0x1F,
  0xF0,0x0F,0x70,0x0F,0x78,0x07,0x1C,0x03,0x1E,0x01,0x8E,0x01,0x8F,0x00,0xCF,0x00,
  0x07,0xFF,0x07,0xFF,0x0F,0xFF,0x3F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0x80,0xFF,0xF0,0xFF,
  0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xF0,0x0F,0xF8,0x07,0xF8,0x07,0xFC,0x03,0xF0,0x0F,0xF1,0x0E,0xF1,0x0E,0xF7,0x08,
  0x4F,0x80,0x4E,0x81,0x7E,0x81,0x3E,0xC1,0x32,0xCD,0x30,0xCF,0xA0,0x5F,0xE0,0x1F,
  0x1F,0xFF,0x3F,0xFF,0x07,0xFF,0x07,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x03,0xFF,0x0F,0xFF,0x0F,0xFF,0x0F,0xFF,0x1F,0xFF,0x1F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0xFF,0x7F,0xFF,0xFE,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0xFF,0xC7,0xFF,0xC6,0xFF,0xE7,0xFF,
  0xFF,0x00,0x7F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x3F,0x00,0x19,0x00,0x19,0x00,
  0xE0,0x1F,0xC0,0x3F,0xE0,0x1F,0xC0,0x3F,0xC0,0x3F,0x80,0x7F,0x80,0x7F,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,
  0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x7F,0xFF,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,
  0x18,0x01,0x1A,0x01,0x0C,0x03,0x0C,0x03,0x06,0x01,0x07,0x00,0x06,0x01,0x04,0x03,
  0x00,0xFF,0x03,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0xA0,0xFF,0xF0,0xFF,0xF0,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFF,0x02,0xFF,
  0x67,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xC7,0xFF,0x8F,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x07,0x00,
  0x00,0x00,0xC0,0x00,0xC0,0x00,0xC3,0x00,0xC2,0x00,0xE0,0x00,0xFE,0x00,0xC0,0x3F,
  0x1B,0x04,0x3F,0x00,0xDF,0x00,0x87,0x00,0x18,0x07,0x27,0x1F,0x45,0x3F,0x81,0x7F,
  0x04,0x03,0xFE,0x01,0xFE,0x01,0xE0,0x1F,0x00,0xFF,0xFC,0xFF,0xFE,0xFF,0xFC,0xFF,
  0x4F,0xFF,0x5F,0xFF,0x3F,0xFF,0x1F,0xFF,0x0F,0xFF,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x03,0x00,0xC6,0x01,0x0D,0xF2,0x01,0xFE,0x00,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFF,0x04,0xFF,0x06,0xFF,0x83,0x7F,0x03,0xFF,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x78,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xA0,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,
  0xF8,0xFF,0x30,0xFF,0x00,0xFF,0x60,0xFF,0xE0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x7F,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0xFF,0x1F,0xFF,0x1F,0xFF,0x1F,0xFF,0x07,0xFF,
  0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xE2,0xFF,0xC0,0xFF,0x80,0xFF,
  0x00,0xFF,0x00,0xFF,0xE0,0xFF,0xF8,0xFF,0xFC,0xFF,0x78,0xFF,0x78,0xFF,0x00,0xFF,
  0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xE7,0xFF,0x40,0xFF,0x00,0xFF,0x00,0xFF,0x18,0xFF,0x01,0xFF,0x01,0xFF,0x03,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xF8,0xFF,0xF0,0xFF,0xF0,0xFF,0xE0,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xF8,0xFF,0xC0,0xFF,
  0x80,0xFF,0xC0,0xFF,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x07,0xF8,0x1F,0xE0,0x1F,0xE0,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0x3F,0xC3,0x3C,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0x3F,
  0x03,0xFF,0x03,0xFF,0x07,0xFF,0x0F,0xFF,0x1F,0xFF,0x1F,0xFF,0x3F,0xFF,0xFF,0xFF,
  0xEE,0xFF,0xEE,0xFF,0xCC,0xFF,0xFC,0xFF,0xFC,0xFF,0xF8,0xFF,0xF8,0xFF,0xE0,0xFF,
  0xFF,0xFF,0xFC,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x7F,0x80,0xFF,0x00,
  0x80,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x80,0x7F,0xC0,0x3F,
  0x00,0xFF,0x00,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,
  0x00,0xFF,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x07,0xF8,0x0F,0xF0,0x3F,0xC0,0xFF,0x00,
  0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x80,0x7F,0x00,0xFF,0x18,0xE7,0x8C,0x73,0xE0,0x1F,0xF0,0x0F,0xF0,0x0F,0xE0,0x1F,
  0x05,0xFF,0x07,0xFF,0x0F,0xFF,0x1F,0xFF,0x3F,0xFF,0xFF,0xFF,0xCF,0xFF,0x0F,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0xF0,0xFF,0x80,0xFF,0x00,0xFF,
  0xF0,0xFF,0xC0,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xC0,0x3F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x3F,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x1F,0xE0,0x3F,0xC0,0x3F,0xC0,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x1F,0xF0,0x0F,0xF0,0x0F,0xF8,0x07,0xFE,0x01,
  0x0F,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x0F,0xF0,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x3E,0xC1,0xFE,0x01,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xE2,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFB,0x00,0xC2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xBF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x7F,0x00,0x3F,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xC0,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xC0,0x00,0x40,0x00,
  0x80,0x7F,0xF0,0x0F,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x00,0x3F,0x00,0x1F,0x00,
  0x00,0xFF,0x01,0xFE,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x01,0xFE,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFE,0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x1F,0x00,0x0F,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x80,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x0F,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x01,0x00,0x00,0x00,
  0x1F,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0x7F,0x00,0x3F,0x00,0x07,0x00,0x01,0x00,0x01,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x5F,0x00
};

// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: t3.png
// Pixel Width: 80px
// Pixel Height: 144px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int t3_tile_map_size = 0xB4;
const int t3_tile_map_width = 0x0A;
const int t3_tile_map_height = 0x12;

const int t3_tile_data_size = 0x0610;
const int t3_tile_count = 0xB4;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char t3_map_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x04,0x05,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,
  0x08,0x09,0x0A,0x0B,0x0C,0x00,0x00,0x00,0x0D,0x0E,0x07,0x0F,0x10,0x07,0x11,0x12,
  0x13,0x00,0x07,0x07,0x07,0x07,0x07,0x07,0x14,0x15,0x16,0x00,0x07,0x07,0x07,0x07,
  0x07,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x07,0x07,0x20,0x21,0x07,0x22,
  0x23,0x24,0x07,0x07,0x07,0x07,0x07,0x25,0x26,0x27,0x28,0x29,0x2A,0x07,0x07,0x07,
  0x07,0x2B,0x2C,0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,
  0x3A,0x3B,0x3C,0x3D,0x3E,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,
  0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,0x50,0x51,0x52,0x00,0x00,0x00,0x53,0x54,0x55,0x56,
  0x57,0x00,0x00,0x00,0x00,0x00,0x58,0x59,0x47,0x5A,0x5B,0x00,0x00,0x00,0x00,0x00,
  0x5C,0x5D,0x5E,0x5F,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char t3_tile_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x80,0x00,0xFE,0x00,0x7F,0x80,0x1F,0xE0,0x00,0xFF,0x80,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xF8,0x00,0xFE,0x00,0x7F,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,
  0xE0,0xFF,0xF0,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x60,0x9F,0x00,0xFF,0x00,0xFF,0x30,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x60,0x80,0x10,0xE0,0x08,0xF0,0x08,0xF0,0x80,0xF8,0x94,0xF8,0x88,0xFC,0xE0,0xFE,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE1,0xFE,0xF0,0xFF,0xF8,0xFF,0xFC,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x80,0x00,0x40,0x80,0x21,0xC0,0x36,0xC1,0x88,0xF7,0xC0,0xFF,
  0x01,0x00,0x04,0x03,0x10,0x0F,0x21,0x1F,0x83,0x7F,0x03,0xFF,0x0F,0xFF,0x0F,0xFF,
  0xBC,0x40,0x03,0xFC,0x00,0xFF,0x00,0xFF,0xF0,0xFF,0xF8,0xFF,0xFC,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x20,0xC0,0x10,0xE0,0x08,0xF0,0x04,0xF8,0x02,0xFC,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xC7,0xFF,0x87,0xFF,0x03,0xFF,0x00,0xFF,0x01,0xFF,0x03,0xFF,0xFF,0xFF,
  0xE0,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x0F,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0xFE,0x01,0xFE,0x80,0xFF,0x80,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x86,0x00,0x5F,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,0xE0,0xFF,0xC0,0xFF,0x20,0xFF,0x70,0xFF,0x7F,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x1E,0xFF,0x0F,0xFF,0x0F,0xFF,0xCF,0xFF,
  0x40,0x80,0x20,0xC0,0x10,0xE0,0x10,0xE0,0x00,0xF0,0x10,0xE0,0x10,0xE0,0x90,0xE0,
  0xFF,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xCF,0xFF,0xE7,0xFF,0xE7,0xFF,0xE3,0xFF,0xF3,0xFF,0xF3,0xFF,0xF1,0xFF,0xF1,0xFF,
  0x80,0xE0,0x90,0xE0,0xC7,0xF8,0xE0,0xFF,0xE0,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x18,0xE0,0x06,0xF8,0x01,0xFE,0x80,0xFF,0xC0,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xEF,0xFF,
  0xFF,0xFF,0xFD,0xFF,0xFD,0xFF,0xF9,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x87,0xFF,0x03,0xFF,0x01,0xFF,0x81,0xFF,0xF8,0xFF,0xFE,0xFF,
  0xF1,0xFF,0xFB,0xFF,0xFB,0xFF,0xFB,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xE0,0xFF,0xF0,0xFF,0xF8,0xFF,0xF8,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,
  0xC0,0xFF,0xC0,0xFF,0xC4,0xFF,0xC0,0xFF,0xC0,0xFF,0xC0,0xFF,0xC4,0xFF,0xE4,0xFF,
  0x1F,0xFF,0x3F,0xFF,0x1F,0xFF,0x1F,0xFF,0x0F,0xFF,0x07,0xFF,0x07,0xFF,0x83,0xFF,
  0x7F,0xFF,0x3F,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0xFF,0x80,0xFF,0x00,0xFF,0x80,0xFF,
  0xFC,0xFF,0xFC,0xFF,0xFC,0xFF,0xF8,0xFF,0x70,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFC,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x80,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x3F,0xFF,0x1F,0xFF,0x0F,0xFF,0x05,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,0x87,0xFF,
  0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x80,0xFF,0x81,0xFE,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x0F,0xF0,0x7F,0x80,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x09,0xF7,0x0B,0xF7,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x18,0xFF,0x7C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xCF,0xFF,0xC4,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x80,0xFF,0x80,0xFF,0xC0,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xCF,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0x3F,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xCF,0xFF,0xCF,0xFF,0x0E,0xFF,0x28,0xDF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x03,0xFC,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x0F,0xF0,0x0F,0xF0,0x1F,0xE0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xFE,0x00,0xFC,0x00,0xF8,0x00,
  0x00,0xFF,0x00,0xFF,0x01,0xFE,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFF,0x01,0xFF,
  0x03,0xFF,0x07,0xFF,0x0F,0xFF,0x1F,0xFF,0x7E,0xFF,0xFD,0xFF,0xFB,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0x7C,0xFF,0xE0,0xFF,0x00,0xFF,0x00,0xFF,
  0x80,0xFF,0x80,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x02,0xFD,0x1F,0xE0,0x1F,0xE0,0x7F,0x80,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x03,0xFC,0x0F,0xF0,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x81,0x7E,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x60,0x9F,0xC0,0x3F,0xC6,0x39,0x8F,0x70,0x3F,0xC0,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x3F,0xC0,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xF8,0x00,
  0xF0,0x00,0xE4,0x00,0xE6,0x00,0xCF,0x00,0x8F,0x00,0x1F,0x00,0x3F,0x00,0x3F,0x00,
  0x01,0xFF,0x81,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xFF,0xFF,0xFC,0xFF,0x08,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x01,0xFE,0x0F,0xF0,0x1F,0xE0,0x0F,0xF0,0x00,0xFF,
  0x00,0xFF,0x00,0xFF,0x2C,0xD3,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x7F,0x80,0xBF,0x40,0xD8,0x20,0xF8,0x00,0xF0,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFC,0x00,0xF8,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,
  0xE0,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x3F,0x00,0x1F,0x00,0x07,0x00,0x03,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x81,0x7E,0xC1,0x3E,0xCF,0x30,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xC0,0x3F,0xE0,0x1F,0xE0,0x1F,
  0x01,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0xBF,0xC0,0xDF,0xE0,0x5F,0xE0,0x1F,0xE0,0x17,0xE0,0x17,0xE0,0x17,0xE0,0x27,0xC0,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFE,0x00,0xDC,0x00,0x00,0x00,
  0xF0,0x00,0xF0,0x00,0xF0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF8,0x07,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,
  0xC0,0x3F,0x80,0x7F,0x00,0xFF,0x00,0xFF,0x03,0xFC,0x03,0xFC,0x07,0xF8,0x0F,0xF0,
  0x00,0xFF,0x00,0xFF,0x03,0xFC,0x07,0xF8,0x0F,0xF0,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x47,0x80,0xF3,0x00,0xF8,0x00,0xF8,0x00,0xCC,0x30,0xC6,0x38,0xC7,0x38,0xC3,0x3C,
  0xF0,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,
  0xF0,0x0F,0xF8,0x07,0xFC,0x03,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x0F,0xF0,0x0F,0xF0,0x7F,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xF1,0x0E,0xF0,0x0F,0xF8,0x07,0xF8,0x07,0xFE,0x01,0xFF,0x00,0xDF,0x00,0x9F,0x00,
  0x80,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xE0,0x00,0xC0,0x00,
  0x3F,0x00,0x0F,0x00,0x07,0x00,0x03,0x00,0x03,0x00,0x01,0x00,0x01,0x00,0x03,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xF8,0x00,0xC0,0x00,
  0xFF,0x00,0xFE,0x00,0xF8,0x00,0xF0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x1F,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xC0,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: t4.png
// Pixel Width: 80px
// Pixel Height: 144px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int t4_tile_map_size = 0xB4;
const int t4_tile_map_width = 0x0A;
const int t4_tile_map_height = 0x12;

const int t4_tile_data_size = 0x0180;
const int t4_tile_count = 0xB4;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char t4_map_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0x00,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x00,0x0D,0x0E,0x0F,0x10,
  0x11,0x12,0x13,0x14,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x16,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char t4_tile_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x60,0x80,
  0x20,0xC0,0x30,0xC0,0x30,0xC0,0x78,0x80,0x38,0xC0,0x38,0xC0,0x38,0xC0,0x18,0xE0,
  0x18,0xE0,0x08,0xF0,0x08,0xF0,0x08,0xF0,0x08,0xF0,0x08,0xF0,0x08,0xF0,0x18,0xE0,
  0x60,0x00,0x20,0x60,0x70,0x20,0x20,0x30,0x30,0x30,0x10,0x30,0x18,0x10,0x11,0x18,
  0x18,0x00,0x10,0x18,0x30,0x30,0x70,0x20,0x60,0x60,0xE0,0x40,0x81,0xC1,0x83,0x81,
  0x00,0x00,0x30,0x20,0x60,0x30,0x70,0x70,0x78,0xD0,0xD0,0x98,0x88,0x98,0x18,0x08,
  0x1F,0x00,0x3F,0x1F,0x30,0x10,0x30,0x10,0x10,0x30,0x30,0x30,0x21,0x30,0x3F,0x3F,
  0x03,0x00,0xC7,0x83,0xC2,0xC6,0x62,0x46,0x40,0x66,0xE4,0x46,0xC6,0xC7,0x0E,0x87,
  0xF8,0x00,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0xF0,
  0x03,0x00,0x03,0x03,0x02,0x03,0x03,0x02,0x07,0x02,0x06,0x02,0x03,0x06,0x03,0x07,
  0xE0,0x00,0xF0,0xF8,0x0C,0x18,0x08,0x0C,0x08,0x0C,0x1C,0x08,0xD8,0x30,0xE0,0xF0,
  0x18,0xE0,0x38,0xC0,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF8,0x00,0xF0,0x00,0xF0,0x00,
  0x09,0x19,0x1B,0x09,0x0A,0x0F,0x06,0x0E,0x06,0x0C,0x0C,0x04,0x00,0x00,0x00,0x00,
  0x03,0x82,0x03,0x06,0x07,0x07,0x0C,0x0C,0x1C,0x08,0x10,0x18,0x10,0x00,0x00,0x00,
  0x08,0x0C,0xFC,0x0C,0xFC,0xFC,0x04,0x06,0x06,0x06,0x02,0x06,0x02,0x00,0x00,0x00,
  0x2E,0x30,0x60,0x20,0x20,0x60,0x20,0x60,0x00,0x60,0x40,0x60,0x40,0x00,0x00,0x00,
  0x0C,0x04,0x0C,0x04,0x04,0x0C,0x0C,0x0C,0x08,0x0C,0x0F,0x0F,0x0F,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF0,0xE0,0x00,0x00,0x00,
  0x04,0x06,0x04,0x06,0x06,0x04,0x0C,0x04,0x0C,0x04,0x07,0x0F,0x0F,0x00,0x00,0x00,
  0x18,0x18,0x0C,0x08,0x08,0x0C,0x1C,0x08,0x38,0x18,0xF0,0xF0,0xC0,0x00,0x00,0x00,
  0xF0,0x00,0xE0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xC0,0x00,0xC0,0x00,0xE0,0x00,
  0xE0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x00,0xA0,0x00,0x00,0x00,0x00,0x00
};

// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: t5.png
// Pixel Width: 40px
// Pixel Height: 144px

// WARNING:  Width of input image padded 4px to 40px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int t5_tile_map_size = 0x5A;
const int t5_tile_map_width = 0x05;
const int t5_tile_map_height = 0x12;

const int t5_tile_data_size = 0x80;
const int t5_tile_count = 0x5A;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char t5_map_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x00,0x05,0x06,0x07,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char t5_tile_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x04,0x03,0x0C,0x1F,0x30,0x38,0x30,0x60,0xC0,0x60,0xC0,0xC0,0x80,0xC0,0xC0,0x80,
  0x20,0xC0,0x38,0xF0,0x08,0x1C,0x06,0x0C,0x04,0x06,0x02,0x06,0x06,0x02,0x06,0x02,
  0xC0,0x00,0x40,0xC0,0x40,0x60,0x21,0x61,0x21,0x33,0x13,0x32,0x16,0x1E,0x1C,0x0C,
  0x60,0x00,0x60,0xC0,0x80,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xC0,0x80,0x80,0xC0,0xC0,0xC0,0xC0,0x60,0x20,0x70,0x18,0x3F,0x08,0x07,0x00,0x00,
  0x02,0x06,0x06,0x06,0x0E,0x04,0x08,0x0C,0x30,0x18,0x60,0xF0,0x40,0x80,0x00,0x00,
  0x0C,0x08,0x1C,0x08,0x18,0x08,0x18,0x08,0x08,0x18,0x18,0x18,0x18,0x00,0x00,0x00
};

// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: pressstart.png
// Pixel Width: 64px
// Pixel Height: 24px

// WARNING:  Width of input image padded 6px to 64px
// WARNING: Height of input image padded 1px to 24px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int pressstart_tile_map_size = 0x18;
const int pressstart_tile_map_width = 0x08;
const int pressstart_tile_map_height = 0x03;

const int pressstart_tile_data_size = 0x0180;
const int pressstart_tile_count = 0x18;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char pressstart_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
  0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char pressstart_tile_data[] ={
  0xFF,0x7F,0xED,0x73,0xF3,0x61,0xF3,0x61,0xED,0x73,0xFF,0x7F,0xF0,0x60,0xF0,0x60,
  0x0F,0x07,0x8E,0x07,0xCF,0x86,0xCF,0x86,0x8E,0x07,0x0F,0x07,0x0F,0x06,0x0F,0x06,
  0xF0,0xF0,0xD8,0x30,0x3C,0x18,0x3C,0x18,0xD8,0x30,0xF0,0xF0,0x60,0x40,0x78,0x00,
  0xFF,0x7F,0xEF,0x70,0xF0,0x60,0xFF,0x7F,0xEF,0x70,0xF0,0x60,0xF0,0x60,0xEF,0x70,
  0xC3,0x83,0x86,0x03,0x0F,0x06,0x03,0x03,0x03,0x00,0x00,0x00,0x0C,0x04,0x87,0x00,
  0xF0,0xF0,0xF0,0x00,0x00,0x00,0xF0,0xF0,0xF8,0x70,0x7C,0x78,0x7C,0x78,0xF8,0x70,
  0x3F,0x3F,0x6F,0x30,0xF0,0x60,0x3F,0x3F,0x3F,0x07,0x07,0x07,0xC7,0x47,0x7F,0x07,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xC0,0x80,0xC0,0x80,0x80,0x00,
  0xF0,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x6F,0x30,
  0x0F,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x07,0x06,0x01,
  0x3C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xF8,0xD8,0xE0,
  0xFF,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x7F,0x07,
  0xC3,0x83,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x07,0x8E,0x07,
  0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0xD8,0x30,
  0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x7F,0x6D,0x1E,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x80,0x80,0x00,
  0xF0,0x60,0x3F,0x3F,0x3F,0x07,0x07,0x07,0xC7,0x47,0x7F,0x07,0x3F,0x3F,0x00,0x00,
  0x01,0x00,0x01,0x00,0x81,0x00,0xC1,0x80,0xC1,0x80,0x81,0x00,0x01,0x00,0x00,0x00,
  0xE0,0xC0,0xE0,0xC0,0xE0,0xC0,0xE0,0xC0,0xE0,0xC0,0xE0,0xC0,0xE0,0xC0,0x00,0x00,
  0xC7,0x47,0xC7,0x47,0xFF,0x47,0xFF,0x7F,0xC7,0x47,0xC7,0x47,0xC7,0x47,0x00,0x00,
  0xCF,0x86,0xCF,0x86,0xCE,0x87,0xCF,0x87,0xCF,0x86,0xCF,0x86,0xCF,0x86,0x00,0x00,
  0x3C,0x18,0x3C,0x18,0xD8,0x30,0xF0,0xF0,0x60,0x40,0x78,0x00,0x3C,0x18,0x00,0x00,
  0x1E,0x0C,0x1E,0x0C,0x1E,0x0C,0x1E,0x0C,0x1E,0x0C,0x1E,0x0C,0x1E,0x0C,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
