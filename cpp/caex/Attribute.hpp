// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/Attribute.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_ATTRIBUTE_HPP
#define CAEX_ATTRIBUTE_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXObject.hpp>

/*PROTECTED REGION ID(Attribute_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class Attribute: public virtual ::caex::CAEXObject
    {
    public:
        Attribute();

        virtual ~Attribute();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getDefaultValue() const;
        void setDefaultValue(::type::String _defaultValue);

        ::type::String getValue() const;
        void setValue(::type::String _value);

        ::caex::AttributeDataType getAttributeDataType() const;
        void setAttributeDataType(::caex::AttributeDataType _attributeDataType);

        ::type::String getRefAttributeType() const;
        void setRefAttributeType(::type::String _refAttributeType);

        ::type::String getUnit() const;
        void setUnit(::type::String _unit);

        // References
        ::ecorecpp::mapping::EList< ::caex::RefSemantic >& getRefSemantic();

        ::ecorecpp::mapping::EList< ::caex::AttributeValueRequirement >& getConstraint();

        ::ecorecpp::mapping::EList< ::caex::Attribute >& getAttribute();

        ::caex::Attribute_ptr getReferenceAttribute();
        void setReferenceAttribute(::caex::Attribute_ptr _referenceAttribute);

        /*PROTECTED REGION ID(Attribute) START*/
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

        /*PROTECTED REGION ID(AttributeImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_defaultValue;

        ::type::String m_value;

        ::caex::AttributeDataType m_attributeDataType;

        ::type::String m_refAttributeType;

        ::type::String m_unit;

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::RefSemantic > > m_refSemantic;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::AttributeValueRequirement > > m_constraint;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::Attribute > > m_attribute;

        ::caex::Attribute_ptr m_referenceAttribute;

    };

} // caex

#endif // CAEX_ATTRIBUTE_HPP

