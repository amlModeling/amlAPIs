// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/AttributeFamily.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_ATTRIBUTEFAMILY_HPP
#define CAEX_ATTRIBUTEFAMILY_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/Attribute.hpp>

/*PROTECTED REGION ID(AttributeFamily_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class AttributeFamily: public virtual ::caex::Attribute
    {
    public:
        AttributeFamily();

        virtual ~AttributeFamily();

        virtual void _initialize();

        // Operations

        // Attributes

        // References

        /*PROTECTED REGION ID(AttributeFamily) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet(::ecore::EInt _featureID,
                ::ecore::EBoolean _resolve);
        virtual void eSet(::ecore::EInt _featureID,
                ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet(::ecore::EInt _featureID);
        virtual void eUnset(::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass();

        /*PROTECTED REGION ID(AttributeFamilyImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        // References

    };

} // caex

#endif // CAEX_ATTRIBUTEFAMILY_HPP

