// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/AnytypeFactory.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _ANYTYPEFACTORY_HPP
#define _ANYTYPEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <anytype.hpp>

namespace anytype
{

    class AnytypeFactory: public virtual ::ecore::EFactory
    {
    public:

        static AnytypeFactory_ptr _instance();

        virtual Element_ptr createElement();
        virtual GenericElement_ptr createGenericElement();
        virtual GenericAttribute_ptr createGenericAttribute();

        virtual ::ecore::EObject_ptr create(::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString(
                ::ecore::EDataType_ptr _eDataType,
                ::ecore::EJavaObject const& _instanceValue);

    protected:

        static std::auto_ptr< AnytypeFactory > s_instance;

        AnytypeFactory();

    };

} // anytype

#endif // _ANYTYPEFACTORY_HPP

