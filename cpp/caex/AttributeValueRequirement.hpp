// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/AttributeValueRequirement.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_ATTRIBUTEVALUEREQUIREMENT_HPP
#define CAEX_ATTRIBUTEVALUEREQUIREMENT_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXBasicObject.hpp>

/*PROTECTED REGION ID(AttributeValueRequirement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class AttributeValueRequirement: public virtual ::caex::CAEXBasicObject
    {
    public:
        AttributeValueRequirement();

        virtual ~AttributeValueRequirement();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getName() const;
        void setName(::type::String _name);

        // References
        ::caex::OrdinalScaled_ptr getOrdinalScaledType();
        void setOrdinalScaledType(::caex::OrdinalScaled_ptr _ordinalScaledType);

        ::caex::NominalScaled_ptr getNominalScaledType();
        void setNominalScaledType(::caex::NominalScaled_ptr _nominalScaledType);

        ::caex::UnknownType_ptr getUnknownType();
        void setUnknownType(::caex::UnknownType_ptr _unknownType);

        /*PROTECTED REGION ID(AttributeValueRequirement) START*/
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

        /*PROTECTED REGION ID(AttributeValueRequirementImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_name;

        // References

        ::caex::OrdinalScaled_ptr m_ordinalScaledType;

        ::caex::NominalScaled_ptr m_nominalScaledType;

        ::caex::UnknownType_ptr m_unknownType;

    };

} // caex

#endif // CAEX_ATTRIBUTEVALUEREQUIREMENT_HPP

