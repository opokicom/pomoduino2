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

#ifndef __UI_HPP__
#define __UI_HPP__

#include "UI_IF.hpp"
#include "State_IF.hpp"

namespace MO
{
    /// UI using plain text messages on serial console.
    class UI: public UI_IF
    {
        public:
            UI();

            virtual void Show_Ready(const State_IF &);
            virtual void Show_Running(const State_IF &);
            virtual void Show_Paused(const State_IF &);
            virtual void Show_Finished(const State_IF &);

            virtual void Set_Beeper(uint8_t);
            virtual bool Showing() const;

            virtual void Setup();
        private:
            void write(const char *a_format, ...);

            enum
            {
                B_SIZE = 64
            };

            uint8_t the_timer;
            char    the_buf[B_SIZE];
            char    the_last_buf[B_SIZE];
    };
}

#endif
