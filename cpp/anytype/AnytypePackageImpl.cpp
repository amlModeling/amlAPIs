// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/AnytypePackageImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <anytype/AnytypePackage.hpp>
#include <anytype/AnytypeFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>

using namespace ::anytype;

AnytypePackage::AnytypePackage()
{

    s_instance.reset(this);

    // Factory
    ::ecore::EFactory_ptr _fa = AnytypeFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(this);

    // Create classes and their features

    // Element
    m_ElementEClass = new ::ecore::EClass();
    m_ElementEClass->setClassifierID(ELEMENT);
    m_ElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_ElementEClass);
    m_Element__name = new ::ecore::EAttribute();
    m_Element__name->setFeatureID(::anytype::AnytypePackage::ELEMENT__NAME);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__name);

    ::ecore::addAnnotation(m_Element__name,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attribute");
    m_Element__value = new ::ecore::EAttribute();
    m_Element__value->setFeatureID(::anytype::AnytypePackage::ELEMENT__VALUE);
    m_ElementEClass->getEStructuralFeatures().push_back(m_Element__value);

    ::ecore::addAnnotation(m_Element__value,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "elementOnly");

    // GenericElement
    m_GenericElementEClass = new ::ecore::EClass();
    m_GenericElementEClass->setClassifierID(GENERICELEMENT);
    m_GenericElementEClass->setEPackage(this);
    getEClassifiers().push_back(m_GenericElementEClass);
    m_GenericElement__elementFeatureMap = new ::ecore::EAttribute();
    m_GenericElement__elementFeatureMap->setFeatureID(
            ::anytype::AnytypePackage::GENERICELEMENT__ELEMENTFEATUREMAP);
    m_GenericElementEClass->getEStructuralFeatures().push_back(
            m_GenericElement__elementFeatureMap);

    ::ecore::addAnnotation(m_GenericElement__elementFeatureMap,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "elementWildcard");
    ::ecore::addAnnotation(m_GenericElement__elementFeatureMap,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            ":0");
    ::ecore::addAnnotation(m_GenericElement__elementFeatureMap,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "wildcards",
            "##any");
    ::ecore::addAnnotation(m_GenericElement__elementFeatureMap,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "processing",
            "lax");
    m_GenericElement__attributeFeatureMap = new ::ecore::EAttribute();
    m_GenericElement__attributeFeatureMap->setFeatureID(
            ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTEFEATUREMAP);
    m_GenericElementEClass->getEStructuralFeatures().push_back(
            m_GenericElement__attributeFeatureMap);

    ::ecore::addAnnotation(m_GenericElement__attributeFeatureMap,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "kind",
            "attributeWildcard");
    ::ecore::addAnnotation(m_GenericElement__attributeFeatureMap,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "name",
            ":1");
    ::ecore::addAnnotation(m_GenericElement__attributeFeatureMap,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "wildcards",
            "##any");
    ::ecore::addAnnotation(m_GenericElement__attributeFeatureMap,
            "http:///org/eclipse/emf/ecore/util/ExtendedMetaData", "processing",
            "lax");
    m_GenericElement__nestedElements = new ::ecore::EReference();
    m_GenericElement__nestedElements->setFeatureID(
            ::anytype::AnytypePackage::GENERICELEMENT__NESTEDELEMENTS);
    m_GenericElementEClass->getEStructuralFeatures().push_back(
            m_GenericElement__nestedElements);
    m_GenericElement__attributes = new ::ecore::EReference();
    m_GenericElement__attributes->setFeatureID(
            ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTES);
    m_GenericElementEClass->getEStructuralFeatures().push_back(
            m_GenericElement__attributes);

    // GenericAttribute
    m_GenericAttributeEClass = new ::ecore::EClass();
    m_GenericAttributeEClass->setClassifierID(GENERICATTRIBUTE);
    m_GenericAttributeEClass->setEPackage(this);
    getEClassifiers().push_back(m_GenericAttributeEClass);

    // Create enums

    // Create data types

    // Initialize package
    setName("anytype");
    setNsPrefix("anytype");
    setNsURI("http://caex/anytype");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_GenericElementEClass->getESuperTypes().push_back(m_ElementEClass);
    m_GenericAttributeEClass->getESuperTypes().push_back(m_ElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Element
    m_ElementEClass->setName("Element");
    m_ElementEClass->setAbstract(true);
    m_ElementEClass->setInterface(false);
    m_Element__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Element__name->setName("name");
    m_Element__name->setDefaultValueLiteral("");
    m_Element__name->setLowerBound(0);
    m_Element__name->setUpperBound(1);
    m_Element__name->setTransient(false);
    m_Element__name->setVolatile(false);
    m_Element__name->setChangeable(true);
    m_Element__name->setUnsettable(false);
    m_Element__name->setID(false);
    m_Element__name->setUnique(true);
    m_Element__name->setDerived(false);
    m_Element__name->setOrdered(true);
    m_Element__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEString());
    m_Element__value->setName("value");
    m_Element__value->setDefaultValueLiteral("");
    m_Element__value->setLowerBound(0);
    m_Element__value->setUpperBound(1);
    m_Element__value->setTransient(false);
    m_Element__value->setVolatile(false);
    m_Element__value->setChangeable(true);
    m_Element__value->setUnsettable(false);
    m_Element__value->setID(false);
    m_Element__value->setUnique(true);
    m_Element__value->setDerived(false);
    m_Element__value->setOrdered(true);
    // GenericElement
    m_GenericElementEClass->setName("GenericElement");
    m_GenericElementEClass->setAbstract(false);
    m_GenericElementEClass->setInterface(false);
    m_GenericElement__elementFeatureMap->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEFeatureMapEntry());
    m_GenericElement__elementFeatureMap->setName("elementFeatureMap");
    m_GenericElement__elementFeatureMap->setDefaultValueLiteral("");
    m_GenericElement__elementFeatureMap->setLowerBound(0);
    m_GenericElement__elementFeatureMap->setUpperBound(-1);
    m_GenericElement__elementFeatureMap->setTransient(true);
    m_GenericElement__elementFeatureMap->setVolatile(false);
    m_GenericElement__elementFeatureMap->setChangeable(true);
    m_GenericElement__elementFeatureMap->setUnsettable(false);
    m_GenericElement__elementFeatureMap->setID(false);
    m_GenericElement__elementFeatureMap->setUnique(false);
    m_GenericElement__elementFeatureMap->setDerived(false);
    m_GenericElement__elementFeatureMap->setOrdered(true);
    m_GenericElement__attributeFeatureMap->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance())->getEFeatureMapEntry());
    m_GenericElement__attributeFeatureMap->setName("attributeFeatureMap");
    m_GenericElement__attributeFeatureMap->setDefaultValueLiteral("");
    m_GenericElement__attributeFeatureMap->setLowerBound(0);
    m_GenericElement__attributeFeatureMap->setUpperBound(-1);
    m_GenericElement__attributeFeatureMap->setTransient(false);
    m_GenericElement__attributeFeatureMap->setVolatile(false);
    m_GenericElement__attributeFeatureMap->setChangeable(true);
    m_GenericElement__attributeFeatureMap->setUnsettable(false);
    m_GenericElement__attributeFeatureMap->setID(false);
    m_GenericElement__attributeFeatureMap->setUnique(false);
    m_GenericElement__attributeFeatureMap->setDerived(false);
    m_GenericElement__attributeFeatureMap->setOrdered(true);
    m_GenericElement__nestedElements->setEType(m_GenericElementEClass);
    m_GenericElement__nestedElements->setName("nestedElements");
    m_GenericElement__nestedElements->setDefaultValueLiteral("");
    m_GenericElement__nestedElements->setLowerBound(0);
    m_GenericElement__nestedElements->setUpperBound(-1);
    m_GenericElement__nestedElements->setTransient(false);
    m_GenericElement__nestedElements->setVolatile(false);
    m_GenericElement__nestedElements->setChangeable(true);
    m_GenericElement__nestedElements->setContainment(true);
    m_GenericElement__nestedElements->setResolveProxies(true);
    m_GenericElement__nestedElements->setUnique(true);
    m_GenericElement__nestedElements->setDerived(false);
    m_GenericElement__nestedElements->setOrdered(true);
    m_GenericElement__attributes->setEType(m_GenericAttributeEClass);
    m_GenericElement__attributes->setName("attributes");
    m_GenericElement__attributes->setDefaultValueLiteral("");
    m_GenericElement__attributes->setLowerBound(0);
    m_GenericElement__attributes->setUpperBound(-1);
    m_GenericElement__attributes->setTransient(false);
    m_GenericElement__attributes->setVolatile(false);
    m_GenericElement__attributes->setChangeable(true);
    m_GenericElement__attributes->setContainment(true);
    m_GenericElement__attributes->setResolveProxies(true);
    m_GenericElement__attributes->setUnique(true);
    m_GenericElement__attributes->setDerived(false);
    m_GenericElement__attributes->setOrdered(true);
    // GenericAttribute
    m_GenericAttributeEClass->setName("GenericAttribute");
    m_GenericAttributeEClass->setAbstract(false);
    m_GenericAttributeEClass->setInterface(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr AnytypePackage::getElement()
{
    return m_ElementEClass;
}
::ecore::EClass_ptr AnytypePackage::getGenericElement()
{
    return m_GenericElementEClass;
}
::ecore::EClass_ptr AnytypePackage::getGenericAttribute()
{
    return m_GenericAttributeEClass;
}

::ecore::EAttribute_ptr AnytypePackage::getElement__name()
{
    return m_Element__name;
}
::ecore::EAttribute_ptr AnytypePackage::getElement__value()
{
    return m_Element__value;
}
::ecore::EReference_ptr AnytypePackage::getGenericElement__nestedElements()
{
    return m_GenericElement__nestedElements;
}
::ecore::EReference_ptr AnytypePackage::getGenericElement__attributes()
{
    return m_GenericElement__attributes;
}
::ecore::EAttribute_ptr AnytypePackage::getGenericElement__elementFeatureMap()
{
    return m_GenericElement__elementFeatureMap;
}
::ecore::EAttribute_ptr AnytypePackage::getGenericElement__attributeFeatureMap()
{
    return m_GenericElement__attributeFeatureMap;
}

