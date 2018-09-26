// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/OrdinalScaled.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_ORDINALSCALED_HPP
#define CAEX_ORDINALSCALED_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(OrdinalScaled_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class OrdinalScaled: public virtual ::ecore::EObject

    {
    public:
        OrdinalScaled();

        virtual ~OrdinalScaled();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRequiredMaxValue() const;
        void setRequiredMaxValue(::type::String _requiredMaxValue);

        ::type::String getRequiredValue() const;
        void setRequiredValue(::type::String _requiredValue);

        ::type::String getRequiredMinValue() const;
        void setRequiredMinValue(::type::String _requiredMinValue);

        // References

        /*PROTECTED REGION ID(OrdinalScaled) START*/
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

        /*PROTECTED REGION ID(OrdinalScaledImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_requiredMaxValue;

        ::type::String m_requiredValue;

        ::type::String m_requiredMinValue;

        // References

    };

} // caex

#endif // CAEX_ORDINALSCALED_HPP

