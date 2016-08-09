/**********************************************************************************************/
/* Copyright 2016-2016 Twitch Interactive, Inc. or its affiliates. All Rights Reserved.       */
/*                                                                                            */
/* Licensed under the Apache License, Version 2.0 (the "License"). You may not use this file  */
/* except in compliance with the License. A copy of the License is located at                 */
/*                                                                                            */
/*     http://aws.amazon.com/apache2.0/                                                       */
/*                                                                                            */
/* or in the "license" file accompanying this file. This file is distributed on an "AS IS"    */
/* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the    */
/* License for the specific language governing permissions and limitations under the License. */
/**********************************************************************************************/

#ifndef LIBCAPTION_EIA608_CHARMAP_H
#define LIBCAPTION_EIA608_CHARMAP_H

#define EIA608_CHAR_COUNT 176
extern const char* eia608_char_map[EIA608_CHAR_COUNT];

// Helper char
#define EIA608_CHAR_NULL                                       ""
// Basic North American character set
#define EIA608_CHAR_SPACE                                      "\x20"
#define EIA608_CHAR_EXCLAMATION_MARK                           "\x21"
#define EIA608_CHAR_QUOTATION_MARK                             "\x22"
#define EIA608_CHAR_NUMBER_SIGN                                "\x23"
#define EIA608_CHAR_DOLLAR_SIGN                                "\x24"
#define EIA608_CHAR_PERCENT_SIGN                               "\x25"
#define EIA608_CHAR_AMPERSAND                                  "\x26"
#define EIA608_CHAR_LEFT_SINGLE_QUOTATION_MARK                 "\xE2\x80\x98"
#define EIA608_CHAR_LEFT_PARENTHESIS                           "\x28"
#define EIA608_CHAR_RIGHT_PARENTHESIS                          "\x29"
#define EIA608_CHAR_LATIN_SMALL_LETTER_A_WITH_ACUTE            "\xC3\xA1"
#define EIA608_CHAR_PLUS_SIGN                                  "\x2B"
#define EIA608_CHAR_COMMA                                      "\x2C"
#define EIA608_CHAR_HYPHEN_MINUS                               "\x2D"
#define EIA608_CHAR_FULL_STOP                                  "\x2E"
#define EIA608_CHAR_SOLIDUS                                    "\x2F"

// Basic North American character set
#define EIA608_CHAR_DIGIT_ZERO                                 "\x30"
#define EIA608_CHAR_DIGIT_ONE                                  "\x31"
#define EIA608_CHAR_DIGIT_TWO                                  "\x32"
#define EIA608_CHAR_DIGIT_THREE                                "\x33"
#define EIA608_CHAR_DIGIT_FOUR                                 "\x34"
#define EIA608_CHAR_DIGIT_FIVE                                 "\x35"
#define EIA608_CHAR_DIGIT_SIX                                  "\x36"
#define EIA608_CHAR_DIGIT_SEVEN                                "\x37"
#define EIA608_CHAR_DIGIT_EIGHT                                "\x38"
#define EIA608_CHAR_DIGIT_NINE                                 "\x39"
#define EIA608_CHAR_COLON                                      "\x3A"
#define EIA608_CHAR_SEMICOLON                                  "\x3B"
#define EIA608_CHAR_LESS_THAN_SIGN                             "\x3C"
#define EIA608_CHAR_EQUALS_SIGN                                "\x3D"
#define EIA608_CHAR_GREATER_THAN_SIGN                          "\x3E"
#define EIA608_CHAR_QUESTION_MARK                              "\x3F"

// Basic North American character set
#define EIA608_CHAR_COMMERCIAL_AT                              "\x40"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_A                     "\x41"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_B                     "\x42"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_C                     "\x43"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_D                     "\x44"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_E                     "\x45"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_F                     "\x46"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_G                     "\x47"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_H                     "\x48"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_I                     "\x49"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_J                     "\x4A"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_K                     "\x4B"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_L                     "\x4C"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_M                     "\x4D"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_N                     "\x4E"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_O                     "\x4F"

// Basic North American character set
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_P                     "\x50"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_Q                     "\x51"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_R                     "\x52"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_S                     "\x53"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_T                     "\x54"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_U                     "\x55"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_V                     "\x56"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_W                     "\x57"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_X                     "\x58"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_Y                     "\x59"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_Z                     "\x5A"
#define EIA608_CHAR_LEFT_SQUARE_BRACKET                        "\x5B"
#define EIA608_CHAR_LATIN_SMALL_LETTER_E_WITH_ACUTE            "\xC3\xA9"
#define EIA608_CHAR_RIGHT_SQUARE_BRACKET                       "\x5D"
#define EIA608_CHAR_LATIN_SMALL_LETTER_I_WITH_ACUTE            "\xC3\xAD"
#define EIA608_CHAR_LATIN_SMALL_LETTER_O_WITH_ACUTE            "\xC3\xB3"

// Basic North American character set
#define EIA608_CHAR_LATIN_SMALL_LETTER_U_WITH_ACUTE            "\xC3\xBA"
#define EIA608_CHAR_LATIN_SMALL_LETTER_A                       "\x61"
#define EIA608_CHAR_LATIN_SMALL_LETTER_B                       "\x62"
#define EIA608_CHAR_LATIN_SMALL_LETTER_C                       "\x63"
#define EIA608_CHAR_LATIN_SMALL_LETTER_D                       "\x64"
#define EIA608_CHAR_LATIN_SMALL_LETTER_E                       "\x65"
#define EIA608_CHAR_LATIN_SMALL_LETTER_F                       "\x66"
#define EIA608_CHAR_LATIN_SMALL_LETTER_G                       "\x67"
#define EIA608_CHAR_LATIN_SMALL_LETTER_H                       "\x68"
#define EIA608_CHAR_LATIN_SMALL_LETTER_I                       "\x69"
#define EIA608_CHAR_LATIN_SMALL_LETTER_J                       "\x6A"
#define EIA608_CHAR_LATIN_SMALL_LETTER_K                       "\x6B"
#define EIA608_CHAR_LATIN_SMALL_LETTER_L                       "\x6C"
#define EIA608_CHAR_LATIN_SMALL_LETTER_M                       "\x6D"
#define EIA608_CHAR_LATIN_SMALL_LETTER_N                       "\x6E"
#define EIA608_CHAR_LATIN_SMALL_LETTER_O                       "\x6F"

// Basic North American character set
#define EIA608_CHAR_LATIN_SMALL_LETTER_P                       "\x70"
#define EIA608_CHAR_LATIN_SMALL_LETTER_Q                       "\x71"
#define EIA608_CHAR_LATIN_SMALL_LETTER_R                       "\x72"
#define EIA608_CHAR_LATIN_SMALL_LETTER_S                       "\x73"
#define EIA608_CHAR_LATIN_SMALL_LETTER_T                       "\x74"
#define EIA608_CHAR_LATIN_SMALL_LETTER_U                       "\x75"
#define EIA608_CHAR_LATIN_SMALL_LETTER_V                       "\x76"
#define EIA608_CHAR_LATIN_SMALL_LETTER_W                       "\x77"
#define EIA608_CHAR_LATIN_SMALL_LETTER_X                       "\x78"
#define EIA608_CHAR_LATIN_SMALL_LETTER_Y                       "\x79"
#define EIA608_CHAR_LATIN_SMALL_LETTER_Z                       "\x7A"
#define EIA608_CHAR_LATIN_SMALL_LETTER_C_WITH_CEDILLA          "\xC3\xA7"
#define EIA608_CHAR_DIVISION_SIGN                              "\xC3\xB7"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_N_WITH_TILDE          "\xC3\x91"
#define EIA608_CHAR_LATIN_SMALL_LETTER_N_WITH_TILDE            "\xC3\xB1"
#define EIA608_CHAR_FULL_BLOCK                                 "\xE2\x96\x88"

// Special North American character set[edit]
#define EIA608_CHAR_REGISTERED_SIGN                            "\xC2\xAE"
#define EIA608_CHAR_DEGREE_SIGN                                "\xC2\xB0"
#define EIA608_CHAR_VULGAR_FRACTION_ONE_HALF                   "\xC2\xBD"
#define EIA608_CHAR_INVERTED_QUESTION_MARK                     "\xC2\xBF"
#define EIA608_CHAR_TRADE_MARK_SIGN                            "\xE2\x84\xA2"
#define EIA608_CHAR_CENT_SIGN                                  "\xC2\xA2"
#define EIA608_CHAR_POUND_SIGN                                 "\xC2\xA3"
#define EIA608_CHAR_EIGHTH_NOTE                                "\xE2\x99\xAA"
#define EIA608_CHAR_LATIN_SMALL_LETTER_A_WITH_GRAVE            "\xC3\xA0"
#define EIA608_CHAR_NO_BREAK_SPACE                             "\xC2\xA0"
#define EIA608_CHAR_LATIN_SMALL_LETTER_E_WITH_GRAVE            "\xC3\xA8"
#define EIA608_CHAR_LATIN_SMALL_LETTER_A_WITH_CIRCUMFLEX       "\xC3\xA2"
#define EIA608_CHAR_LATIN_SMALL_LETTER_E_WITH_CIRCUMFLEX       "\xC3\xAA"
#define EIA608_CHAR_LATIN_SMALL_LETTER_I_WITH_CIRCUMFLEX       "\xC3\xAE"
#define EIA608_CHAR_LATIN_SMALL_LETTER_O_WITH_CIRCUMFLEX       "\xC3\xB4"
#define EIA608_CHAR_LATIN_SMALL_LETTER_U_WITH_CIRCUMFLEX       "\xC3\xBB"

// Extended Western European character set : Extended Spanish/Miscellaneous
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_A_WITH_ACUTE          "\xC3\x81"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_E_WITH_ACUTE          "\xC3\x89"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_O_WITH_ACUTE          "\xC3\x93"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_U_WITH_ACUTE          "\xC3\x9A"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_U_WITH_DIAERESIS      "\xC3\x9C"
#define EIA608_CHAR_LATIN_SMALL_LETTER_U_WITH_DIAERESIS        "\xC3\xBC"
#define EIA608_CHAR_RIGHT_SINGLE_QUOTATION_MARK                "\xE2\x80\x99"
#define EIA608_CHAR_INVERTED_EXCLAMATION_MARK                  "\xC2\xA1"
#define EIA608_CHAR_ASTERISK                                   "\x2A"
#define EIA608_CHAR_APOSTROPHE                                 "\x27"
#define EIA608_CHAR_EM_DASH                                    "\xE2\x80\x94"
#define EIA608_CHAR_COPYRIGHT_SIGN                             "\xC2\xA9"
#define EIA608_CHAR_SERVICE_MARK                               "\xE2\x84\xA0"
#define EIA608_CHAR_BULLET                                     "\xE2\x80\xA2"
#define EIA608_CHAR_LEFT_DOUBLE_QUOTATION_MARK                 "\xE2\x80\x9C"
#define EIA608_CHAR_RIGHT_DOUBLE_QUOTATION_MARK                "\xE2\x80\x9D"

// Extended Western European character set : Extended French
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_A_WITH_GRAVE          "\xC3\x80"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_A_WITH_CIRCUMFLEX     "\xC3\x82"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_C_WITH_CEDILLA        "\xC3\x87"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_E_WITH_GRAVE          "\xC3\x88"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_E_WITH_CIRCUMFLEX     "\xC3\x8A"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_E_WITH_DIAERESIS      "\xC3\x8B"
#define EIA608_CHAR_LATIN_SMALL_LETTER_E_WITH_DIAERESIS        "\xC3\xAB"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_I_WITH_CIRCUMFLEX     "\xC3\x8E"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_I_WITH_DIAERESIS      "\xC3\x8F"
#define EIA608_CHAR_LATIN_SMALL_LETTER_I_WITH_DIAERESIS        "\xC3\xAF"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_O_WITH_CIRCUMFLEX     "\xC3\x94"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_U_WITH_GRAVE          "\xC3\x99"
#define EIA608_CHAR_LATIN_SMALL_LETTER_U_WITH_GRAVE            "\xC3\xB9"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_U_WITH_CIRCUMFLEX     "\xC3\x9B"
#define EIA608_CHAR_LEFT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK  "\xC2\xAB"
#define EIA608_CHAR_RIGHT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK "\xC2\xBB"

// Extended Western European character set : Portuguese
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_A_WITH_TILDE          "\xC3\x83"
#define EIA608_CHAR_LATIN_SMALL_LETTER_A_WITH_TILDE            "\xC3\xA3"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_I_WITH_ACUTE          "\xC3\x8D"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_I_WITH_GRAVE          "\xC3\x8C"
#define EIA608_CHAR_LATIN_SMALL_LETTER_I_WITH_GRAVE            "\xC3\xAC"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_O_WITH_GRAVE          "\xC3\x92"
#define EIA608_CHAR_LATIN_SMALL_LETTER_O_WITH_GRAVE            "\xC3\xB2"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_O_WITH_TILDE          "\xC3\x95"
#define EIA608_CHAR_LATIN_SMALL_LETTER_O_WITH_TILDE            "\xC3\xB5"
#define EIA608_CHAR_LEFT_CURLY_BRACKET                         "\x7B"
#define EIA608_CHAR_RIGHT_CURLY_BRACKET                        "\x7D"
#define EIA608_CHAR_REVERSE_SOLIDUS                            "\x5C"
#define EIA608_CHAR_CIRCUMFLEX_ACCENT                          "\x5E"
#define EIA608_CHAR_LOW_LINE                                   "\x5F"
#define EIA608_CHAR_VERTICAL_LINE                              "\x7C"
#define EIA608_CHAR_TILDE                                      "\x7E"

// Extended Western European character set : German/Danish
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_A_WITH_DIAERESIS      "\xC3\x84"
#define EIA608_CHAR_LATIN_SMALL_LETTER_A_WITH_DIAERESIS        "\xC3\xA4"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_O_WITH_DIAERESIS      "\xC3\x96"
#define EIA608_CHAR_LATIN_SMALL_LETTER_O_WITH_DIAERESIS        "\xC3\xB6"
#define EIA608_CHAR_LATIN_SMALL_LETTER_SHARP_S                 "\xC3\x9F"
#define EIA608_CHAR_YEN_SIGN                                   "\xC2\xA5"
#define EIA608_CHAR_CURRENCY_SIGN                              "\xC2\xA4"
#define EIA608_CHAR_BROKEN_BAR                                 "\xC2\xA6"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE     "\xC3\x85"
#define EIA608_CHAR_LATIN_SMALL_LETTER_A_WITH_RING_ABOVE       "\xC3\xA5"
#define EIA608_CHAR_LATIN_CAPITAL_LETTER_O_WITH_STROKE         "\xC3\x98"
#define EIA608_CHAR_LATIN_SMALL_LETTER_O_WITH_STROKE           "\xC3\xB8"
#define EIA608_CHAR_BOX_DRAWINGS_LIGHT_DOWN_AND_RIGHT          "\xE2\x94\x8C" // top left
#define EIA608_CHAR_BOX_DRAWINGS_LIGHT_DOWN_AND_LEFT           "\xE2\x94\x90" // top right
#define EIA608_CHAR_BOX_DRAWINGS_LIGHT_UP_AND_RIGHT            "\xE2\x94\x94" // lower left
#define EIA608_CHAR_BOX_DRAWINGS_LIGHT_UP_AND_LEFT             "\xE2\x94\x98" // bottom right

#endif