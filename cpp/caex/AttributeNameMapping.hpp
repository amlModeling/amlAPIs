// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/AttributeNameMapping.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_ATTRIBUTENAMEMAPPING_HPP
#define CAEX_ATTRIBUTENAMEMAPPING_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXBasicObject.hpp>

/*PROTECTED REGION ID(AttributeNameMapping_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class AttributeNameMapping: public virtual ::caex::CAEXBasicObject
    {
    public:
        AttributeNameMapping();

        virtual ~AttributeNameMapping();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRoleAttributeName() const;
        void setRoleAttributeName(::type::String _roleAttributeName);

        ::type::String getSystemUnitAttributeName() const;
        void setSystemUnitAttributeName(
                ::type::String _systemUnitAttributeName);

        // References
        ::caex::Attribute_ptr getRoleAttribute();
        void setRoleAttribute(::caex::Attribute_ptr _roleAttribute);

        ::caex::Attribute_ptr getSystemUnitAttribute();
        void setSystemUnitAttribute(::caex::Attribute_ptr _systemUnitAttribute);

        /*PROTECTED REGION ID(AttributeNameMapping) START*/
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

        /*PROTECTED REGION ID(AttributeNameMappingImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_roleAttributeName;

        ::type::String m_systemUnitAttributeName;

        // References

        ::caex::Attribute_ptr m_roleAttribute;

        ::caex::Attribute_ptr m_systemUnitAttribute;

    };

} // caex

#endif // CAEX_ATTRIBUTENAMEMAPPING_HPP

