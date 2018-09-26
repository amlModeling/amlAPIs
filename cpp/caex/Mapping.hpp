// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/Mapping.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_MAPPING_HPP
#define CAEX_MAPPING_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <caex/CAEXBasicObject.hpp>

/*PROTECTED REGION ID(Mapping_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class Mapping: public virtual ::caex::CAEXBasicObject
    {
    public:
        Mapping();

        virtual ~Mapping();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        ::ecorecpp::mapping::EList< ::caex::AttributeNameMapping >& getAttributeNameMapping();

        ::ecorecpp::mapping::EList< ::caex::InterfaceIDMapping >& getInterfaceIDMapping();

        /*PROTECTED REGION ID(Mapping) START*/
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

        /*PROTECTED REGION ID(MappingImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::AttributeNameMapping > > m_attributeNameMapping;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::InterfaceIDMapping > > m_interfaceIDMapping;

    };

} // caex

#endif // CAEX_MAPPING_HPP

