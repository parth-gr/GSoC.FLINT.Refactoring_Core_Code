/* /////////////////////////////////////////////////////////////////////////
 * File:        winstl/exception/invalid_file_type_exception.hpp
 *
 * Purpose:     winstl::invalid_file_type_exception class
 *
 * Created:     1st January 2017
 * Updated:     13th September 2019
 *
 * Home:        http://stlsoft.org/
 *
 * Copyright (c) 2017-2019, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the
 *   names of any contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file winstl/exception/invalid_file_type_exception.hpp
 *
 * \brief [C++] Definition of the winstl::invalid_file_type_exception class
 *   (\ref group__library__Exception "Exception" Library).
 */

#ifndef WINSTL_INCL_WINSTL_EXCEPTION_HPP_INVALID_FILE_TYPE_EXCEPTION
#define WINSTL_INCL_WINSTL_EXCEPTION_HPP_INVALID_FILE_TYPE_EXCEPTION

#ifndef STLSOFT_DOCUMENTATION_SKIP_SECTION
# define WINSTL_VER_WINSTL_EXCEPTION_HPP_INVALID_FILE_TYPE_EXCEPTION_MAJOR      1
# define WINSTL_VER_WINSTL_EXCEPTION_HPP_INVALID_FILE_TYPE_EXCEPTION_MINOR      0
# define WINSTL_VER_WINSTL_EXCEPTION_HPP_INVALID_FILE_TYPE_EXCEPTION_REVISION   1
# define WINSTL_VER_WINSTL_EXCEPTION_HPP_INVALID_FILE_TYPE_EXCEPTION_EDIT       3
#endif /* !STLSOFT_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#ifndef WINSTL_INCL_WINSTL_H_WINSTL
# include <winstl/winstl.h>
#endif /* !WINSTL_INCL_WINSTL_H_WINSTL */
#ifdef STLSOFT_TRACE_INCLUDE
# pragma message(__FILE__)
#endif /* STLSOFT_TRACE_INCLUDE */

#ifndef WINSTL_INCL_WINSTL_EXCEPTION_HPP_INVALID_ENTRY_TYPE_EXCEPTION
# include <winstl/exception/invalid_entry_type_exception.hpp>
#endif /* !WINSTL_INCL_WINSTL_EXCEPTION_HPP_INVALID_ENTRY_TYPE_EXCEPTION */
#ifndef STLSOFT_INCL_STLSOFT_EXCEPTION_UTIL_HPP_FILESYSTEM_PROPAGATING_EXCEPTION_BASE
# include <stlsoft/exception/util/filesystem_propagating_exception_base.hpp>
#endif /* !STLSOFT_INCL_STLSOFT_EXCEPTION_UTIL_HPP_FILESYSTEM_PROPAGATING_EXCEPTION_BASE */

/* /////////////////////////////////////////////////////////////////////////
 * namespace
 */

#ifndef WINSTL_NO_NAMESPACE
# if defined(STLSOFT_NO_NAMESPACE) || \
     defined(STLSOFT_DOCUMENTATION_SKIP_SECTION)
/* There is no stlsoft namespace, so must define ::winstl */
namespace winstl
{
# else
/* Define stlsoft::winstl_project */
namespace stlsoft
{
namespace winstl_project
{
# endif /* STLSOFT_NO_NAMESPACE */
#endif /* !WINSTL_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * classes
 */

typedef STLSOFT_NS_QUAL(filesystem_propagating_exception_base)<
    invalid_entry_type_exception
>                                                           invalid_file_type_exception;

/* /////////////////////////////////////////////////////////////////////////
 * namespace
 */

#ifndef WINSTL_NO_NAMESPACE
# if defined(STLSOFT_NO_NAMESPACE) || \
     defined(STLSOFT_DOCUMENTATION_SKIP_SECTION)
} /* namespace winstl */
# else
} /* namespace winstl_project */
} /* namespace stlsoft */
# endif /* STLSOFT_NO_NAMESPACE */
#endif /* !WINSTL_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * inclusion
 */

#ifdef STLSOFT_CF_PRAGMA_ONCE_SUPPORT
# pragma once
#endif /* STLSOFT_CF_PRAGMA_ONCE_SUPPORT */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !WINSTL_INCL_WINSTL_EXCEPTION_HPP_INVALID_FILE_TYPE_EXCEPTION */

/* ///////////////////////////// end of file //////////////////////////// */

