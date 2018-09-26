// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SystemUnitClass.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_SYSTEMUNITCLASS_HPP
#define CAEX_SYSTEMUNITCLASS_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXObject.hpp>

/*PROTECTED REGION ID(SystemUnitClass_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class SystemUnitClass: public virtual ::caex::CAEXObject
    {
    public:
        SystemUnitClass();

        virtual ~SystemUnitClass();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRefBaseClassPath() const;
        void setRefBaseClassPath(::type::String _refBaseClassPath);

        // References
        ::ecorecpp::mapping::EList< ::caex::Attribute >& getAttribute();

        ::ecorecpp::mapping::EList< ::caex::InterfaceClass >& getExternalInterface();

        ::ecorecpp::mapping::EList< ::caex::InternalElement >& getInternalElement();

        ::ecorecpp::mapping::EList< ::caex::SupportedRoleClass >& getSupportedRoleClass();

        ::ecorecpp::mapping::EList< ::caex::InternalLink >& getInternalLink();

        ::caex::SystemUnitClass_ptr getBaseClass();
        void setBaseClass(::caex::SystemUnitClass_ptr _baseClass);

        ::ecorecpp::mapping::EList< ::caex::SystemUnitClass >& getSystemUnitClass();

        /*PROTECTED REGION ID(SystemUnitClass) START*/
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

        /*PROTECTED REGION ID(SystemUnitClassImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_refBaseClassPath;

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::Attribute > > m_attribute;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::InterfaceClass > > m_externalInterface;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::InternalElement > > m_internalElement;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::SupportedRoleClass > > m_supportedRoleClass;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::InternalLink > > m_internalLink;

        ::caex::SystemUnitClass_ptr m_baseClass;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::SystemUnitClass > > m_systemUnitClass;

    };

} // caex

#endif // CAEX_SYSTEMUNITCLASS_HPP

