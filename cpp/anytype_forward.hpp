// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype_forward.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _ANYTYPE_FORWARD_HPP
#define _ANYTYPE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(anytype_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace anytype
{

// EDataType

// EClass

// Element
    class Element;
    typedef Element* Element_ptr;

// GenericElement
    class GenericElement;
    typedef GenericElement* GenericElement_ptr;

// GenericAttribute
    class GenericAttribute;
    typedef GenericAttribute* GenericAttribute_ptr;

// Package & Factory
    class AnytypeFactory;
    typedef AnytypeFactory * AnytypeFactory_ptr;
    class AnytypePackage;
    typedef AnytypePackage * AnytypePackage_ptr;

    template< typename T, typename S >
    inline T* instanceOf(S* _s)
    {
        return dynamic_cast< T* >(_s);
    }

} // anytype

#endif // _ANYTYPE_FORWARD_HPP

