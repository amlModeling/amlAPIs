// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/AnytypePackage.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _ANYTYPEPACKAGE_HPP
#define _ANYTYPEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <anytype_forward.hpp>

namespace anytype
{

    class AnytypePackage: public virtual ::ecore::EPackage
    {
    public:

        static AnytypePackage_ptr _instance();

        // IDs for classifiers

        static const int ELEMENT = 0;

        static const int GENERICATTRIBUTE = 1;

        static const int GENERICELEMENT = 2;

        static const int ELEMENT__NAME = 0;

        static const int ELEMENT__VALUE = 1;

        static const int GENERICELEMENT__NESTEDELEMENTS = 2;

        static const int GENERICELEMENT__ATTRIBUTES = 3;

        static const int GENERICELEMENT__ELEMENTFEATUREMAP = 4;

        static const int GENERICELEMENT__ATTRIBUTEFEATUREMAP = 5;

        // IDs for classifiers for class Element 

        // IDs for classifiers for class GenericAttribute 

        static const int GENERICATTRIBUTE__NAME = ELEMENT__NAME;

        static const int GENERICATTRIBUTE__VALUE = ELEMENT__VALUE;

        // IDs for classifiers for class GenericElement 

        static const int GENERICELEMENT__NAME = ELEMENT__NAME;

        static const int GENERICELEMENT__VALUE = ELEMENT__VALUE;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getElement();

        virtual ::ecore::EClass_ptr getGenericElement();

        virtual ::ecore::EClass_ptr getGenericAttribute();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getElement__name();

        virtual ::ecore::EAttribute_ptr getElement__value();

        virtual ::ecore::EReference_ptr getGenericElement__nestedElements();

        virtual ::ecore::EReference_ptr getGenericElement__attributes();

        virtual ::ecore::EAttribute_ptr getGenericElement__elementFeatureMap();

        virtual ::ecore::EAttribute_ptr getGenericElement__attributeFeatureMap();

    protected:

        static std::auto_ptr< AnytypePackage > s_instance;

        AnytypePackage();

        // EClass instances 

        ::ecore::EClass_ptr m_ElementEClass;

        ::ecore::EClass_ptr m_GenericElementEClass;

        ::ecore::EClass_ptr m_GenericAttributeEClass;

        // EEnuminstances 

        // EDataType instances 

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_Element__name;

        ::ecore::EAttribute_ptr m_Element__value;

        ::ecore::EReference_ptr m_GenericElement__nestedElements;

        ::ecore::EReference_ptr m_GenericElement__attributes;

        ::ecore::EAttribute_ptr m_GenericElement__elementFeatureMap;

        ::ecore::EAttribute_ptr m_GenericElement__attributeFeatureMap;

    };

} // anytype

#endif // _ANYTYPEPACKAGE_HPP

