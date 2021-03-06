// 
// Copyright (c) 2008 Sean Farrell
// 
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
// 

#ifndef _LIBXMLMM_LIBXMLSENTRY_H_INCLUDED_
#define _LIBXMLMM_LIBXMLSENTRY_H_INCLUDED_

namespace xmlmm
{
  /**
  * Manages libxml's initialisation and cleanup.
  *
  * @note This class is an internal helper class that manages libxml's 
  * initialisation and cleanup. 
  *
  * @note Multiple instances of LibXmlSentry can live side by side, libxml
  * will only be initialized once.
  **/
  class LibXmlSentry
  {
  public:
    /** 
    * Initialize libxml and register callback functions for construction
    * and destruction of wrappers.
    *
    * @todo Review if xmlInitParser() is used as intended.s
    **/
    LibXmlSentry();

    /**
    * Clean up libxml.
    **/
    ~LibXmlSentry();

  private:
    /** The number of instances of libxml. **/
    static unsigned int use_count;

    LibXmlSentry(const LibXmlSentry&);
    LibXmlSentry& operator = (const LibXmlSentry&);
  };
}

#endif // _LIBXMLMM_LIBXMLSENTRY_H_INCLUDED_
