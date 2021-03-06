// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: vapeboyrun.png
// Pixel Width: 16px
// Pixel Height: 192px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int vapeboyrun_tile_map_size = 0x30;
const int vapeboyrun_tile_map_width = 0x02;
const int vapeboyrun_tile_map_height = 0x18;

const int vapeboyrun_tile_data_size = 0x0300;
const int vapeboyrun_tile_count = 0x30;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char vapeboyrun_map_data[] ={
  0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
  0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,
  0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char vapeboyrun_tile_data[] ={
  0x07,0x07,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x78,0x5F,0x60,0x5F,0x60,
  0xE0,0xE0,0xF8,0xF8,0xFC,0xFC,0xFE,0xE2,0xFE,0x82,0xFE,0x02,0x76,0xCE,0x76,0xCE,
  0x5F,0x60,0x2F,0x30,0x2F,0x30,0x17,0x18,0x0B,0x0C,0x08,0x1F,0x0F,0x3F,0x0F,0x6F,
  0xFE,0x02,0xFE,0x02,0xCE,0x32,0xFC,0x04,0xF8,0x18,0x20,0xE0,0x20,0xE0,0x80,0xF8,
  0x0F,0x6F,0x0F,0x6F,0x0F,0x0F,0x06,0x06,0x0E,0x0E,0x06,0x06,0x00,0x00,0x00,0x00,
  0xC0,0xF8,0xE0,0xE0,0xE0,0xE0,0x00,0x60,0x00,0x30,0x00,0x30,0x00,0x18,0x00,0x00,
  0x00,0x00,0x07,0x07,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x78,0x5F,0x60,
  0x00,0x00,0xE0,0xE0,0xF8,0xF8,0xFC,0xFC,0xFE,0xE2,0xFE,0x82,0xFE,0x02,0x76,0xCE,
  0x5F,0x60,0x5F,0x60,0x2F,0x30,0x2F,0x30,0x17,0x18,0x0B,0x0C,0x08,0x1F,0x0F,0x3F,
  0x76,0xCE,0xFE,0x02,0xFE,0x02,0xCE,0x32,0xFC,0x04,0xF8,0x18,0x20,0xE0,0x20,0xE0,
  0x0F,0x3F,0x0F,0x3F,0x0F,0x1F,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,
  0x20,0xE0,0x80,0xF8,0xC0,0xF8,0xE0,0xE0,0x00,0x60,0x80,0xE0,0x80,0xE0,0x00,0x70,
  0x00,0x00,0x07,0x07,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x78,0x5F,0x60,
  0x00,0x00,0xE0,0xE0,0xF8,0xF8,0xFC,0xFC,0xFE,0xE2,0xFE,0x82,0xFE,0x02,0x76,0xCE,
  0x5F,0x60,0x5F,0x60,0x2F,0x30,0x2F,0x30,0x17,0x18,0x0B,0x0C,0x08,0x0F,0x0F,0x0F,
  0x76,0xCE,0xFE,0x02,0xFE,0x02,0xCE,0x32,0xFC,0x04,0xF8,0x18,0x20,0xE0,0x20,0xE0,
  0x0F,0x1F,0x0F,0x1F,0x0F,0x0F,0x07,0x07,0x07,0x07,0x01,0x01,0x00,0x01,0x00,0x01,
  0x20,0xE0,0x00,0xF0,0x80,0xF0,0xE0,0xE0,0x00,0xE0,0xC0,0xC0,0xC0,0xC0,0x00,0x80,
  0x07,0x07,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x78,0x5F,0x60,0x5F,0x60,
  0xE0,0xE0,0xF8,0xF8,0xFC,0xFC,0xFE,0xE2,0xFE,0x82,0xFE,0x02,0x76,0xCE,0x76,0xCE,
  0x5F,0x60,0x2F,0x30,0x2F,0x30,0x17,0x18,0x0B,0x0C,0x08,0x0F,0x0F,0x0F,0x0E,0x0F,
  0xFE,0x02,0xFE,0x02,0xCE,0x32,0xFC,0x04,0xF8,0x18,0x20,0xE0,0x20,0xE0,0x60,0xE0,
  0x0C,0x0F,0x0D,0x0F,0x07,0x07,0x07,0x07,0x03,0x03,0x00,0x07,0x00,0x06,0x00,0x00,
  0xE0,0xF0,0xE0,0xE0,0xE0,0xE0,0x00,0xC0,0x80,0x80,0xC0,0xC0,0x60,0x60,0x00,0x00,
  0x07,0x07,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x70,0x5E,0x61,0x5E,0x61,
  0xE0,0xE0,0xF8,0xF8,0xFC,0xFC,0xFE,0xC6,0xFE,0x02,0xFE,0x02,0xEE,0x9A,0xEE,0x9A,
  0x5F,0x60,0x3F,0x20,0x3F,0x20,0x1F,0x10,0x0F,0x08,0x08,0x0F,0x0E,0x0F,0x08,0x0F,
  0xFE,0x02,0xFE,0x02,0x9E,0x62,0xFC,0x04,0xF8,0x18,0x20,0xE0,0x60,0xE0,0xE0,0xF8,
  0x09,0x0F,0x09,0x0F,0x0F,0x0F,0x0E,0x0F,0x07,0x1F,0x03,0x13,0x01,0x01,0x00,0x00,
  0xE0,0xF8,0xE0,0xE0,0xE0,0xE0,0x00,0xC0,0x00,0x80,0x00,0x00,0x80,0x80,0x00,0x00,
  0x00,0x00,0x07,0x07,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x70,0x5E,0x61,
  0x00,0x00,0xE0,0xE0,0xF8,0xF8,0xFC,0xFC,0xFE,0xC6,0xFE,0x02,0xFE,0x02,0xEE,0x9A,
  0x5E,0x61,0x5F,0x60,0x3F,0x20,0x3F,0x20,0x1F,0x10,0x0F,0x08,0x08,0x0F,0x0C,0x0F,
  0xEE,0x9A,0xFE,0x02,0xFE,0x02,0x9E,0x62,0xFC,0x04,0xF8,0x18,0x20,0xE0,0x60,0xE0,
  0x08,0x0F,0x09,0x0F,0x09,0x0F,0x0F,0x0F,0x0E,0x0E,0x06,0x07,0x06,0x07,0x07,0x07,
  0xE0,0xEC,0xE0,0xFC,0xE0,0xE0,0xE0,0xE0,0x00,0xE0,0x00,0xC0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x07,0x07,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x70,0x5E,0x61,
  0x00,0x00,0xE0,0xE0,0xF8,0xF8,0xFC,0xFC,0xFE,0xC6,0xFE,0x02,0xFE,0x02,0xEE,0x9A,
  0x5E,0x61,0x5F,0x60,0x3F,0x20,0x3F,0x20,0x1F,0x10,0x0F,0x08,0x08,0x0F,0x0E,0x0F,
  0xEE,0x9A,0xFE,0x02,0xFE,0x02,0x9E,0x62,0xFC,0x04,0xF8,0x18,0x20,0xE0,0x20,0xE0,
  0x0F,0x1F,0x0F,0x1F,0x0F,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,0x1C,0x1C,0x18,0x18,
  0x00,0xF0,0x00,0xF0,0xE0,0xE0,0xE0,0xE0,0x00,0xE0,0x00,0x70,0x00,0x18,0x00,0x00,
  0x07,0x07,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x7F,0x7F,0x7F,0x70,0x5E,0x61,0x5E,0x61,
  0xE0,0xE0,0xF8,0xF8,0xFC,0xFC,0xFE,0xC6,0xFE,0x02,0xFE,0x02,0xEE,0x9A,0xEE,0x9A,
  0x5F,0x60,0x3F,0x20,0x3F,0x20,0x1F,0x10,0x0F,0x08,0x08,0x1F,0x0F,0x3F,0x0F,0x2F,
  0xFE,0x02,0xFE,0x02,0x9E,0x62,0xFC,0x04,0xF8,0x18,0x20,0xE0,0x20,0xF8,0x00,0xF8,
  0x0F,0x3F,0x0F,0x1F,0x0F,0x0F,0x0E,0x0E,0x1C,0x1C,0x18,0x18,0x00,0x00,0x00,0x00,
  0x00,0xE0,0xE0,0xE0,0xE0,0xE0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x70,0x00,0x00};
