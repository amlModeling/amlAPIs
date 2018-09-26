// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/AnytypeFactoryImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <anytype/AnytypeFactory.hpp>
#include <anytype/AnytypePackage.hpp>
#include <anytype/Element.hpp>
#include <anytype/GenericElement.hpp>
#include <anytype/GenericAttribute.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::anytype;

AnytypeFactory::AnytypeFactory()
{
    s_instance.reset(this);
}

::ecore::EObject_ptr AnytypeFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case AnytypePackage::ELEMENT:
        return createElement();
    case AnytypePackage::GENERICELEMENT:
        return createGenericElement();
    case AnytypePackage::GENERICATTRIBUTE:
        return createGenericAttribute();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject AnytypeFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString AnytypeFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Element_ptr AnytypeFactory::createElement()
{
    return new Element();
}
GenericElement_ptr AnytypeFactory::createGenericElement()
{
    return new GenericElement();
}
GenericAttribute_ptr AnytypeFactory::createGenericAttribute()
{
    return new GenericAttribute();
}

