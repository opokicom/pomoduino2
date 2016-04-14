/*
Copyright (c) 2016 Miroslaw Opoka <mirek@opoki.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef __EEPROM_IF_HPP__
#define __EEPROM_IF_HPP__

#include <stdint.h>

namespace MO
{
    /** Interface to EEPROM.
     * 
     * Simple functions to write and read bytes.
     * finishing.
     */
    class Eeprom_IF
    {
        public:
            /// Virtual destructor, since we will inherit from this class.
            virtual ~Eeprom_IF() { }

            /// Reads a byte from given eeprom address.
            virtual uint8_t Read(int a_addr) const = 0;

            /// Writes a byte to given eeprom address.
            virtual void Write(int a_addr, uint8_t a_value) = 0;
    };
}

#endif
