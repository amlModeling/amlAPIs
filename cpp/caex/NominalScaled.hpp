// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/NominalScaled.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_NOMINALSCALED_HPP
#define CAEX_NOMINALSCALED_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>

#include <ecore/EObject.hpp>

/*PROTECTED REGION ID(NominalScaled_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class NominalScaled: public virtual ::ecore::EObject

    {
    public:
        NominalScaled();

        virtual ~NominalScaled();

        virtual void _initialize();

        // Operations

        // Attributes
        std::vector< ::type::String > const& getRequiredValue() const;
        void setRequiredValue(std::vector< ::type::String > _requiredValue);

        void addRequiredValue(
                ::type::String const& _new_element_in_requiredValue);
        void setRequiredValueAt(size_t _position,
                ::type::String const& _new_element_in_requiredValue);
        void deleteRequiredValueAt(size_t _position);

        // References

        /*PROTECTED REGION ID(NominalScaled) START*/
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

        /*PROTECTED REGION ID(NominalScaledImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        std::vector< ::type::String > m_requiredValue;

        // References

    };

} // caex

#endif // CAEX_NOMINALSCALED_HPP

