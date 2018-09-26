// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/RoleRequirements.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_ROLEREQUIREMENTS_HPP
#define CAEX_ROLEREQUIREMENTS_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXBasicObject.hpp>

/*PROTECTED REGION ID(RoleRequirements_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class RoleRequirements: public virtual ::caex::CAEXBasicObject
    {
    public:
        RoleRequirements();

        virtual ~RoleRequirements();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRefBaseRoleClassPath() const;
        void setRefBaseRoleClassPath(::type::String _refBaseRoleClassPath);

        // References
        ::ecorecpp::mapping::EList< ::caex::Attribute >& getAttribute();

        ::ecorecpp::mapping::EList< ::caex::InterfaceClass >& getExternalInterface();

        ::caex::Mapping_ptr getMappingObject();
        void setMappingObject(::caex::Mapping_ptr _mappingObject);

        ::caex::RoleClass_ptr getRoleClass();
        void setRoleClass(::caex::RoleClass_ptr _roleClass);

        /*PROTECTED REGION ID(RoleRequirements) START*/
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

        /*PROTECTED REGION ID(RoleRequirementsImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_refBaseRoleClassPath;

        // References

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::Attribute > > m_attribute;

        ::ecorecpp::mapping::out_ptr<
                ::ecorecpp::mapping::EList< ::caex::InterfaceClass > > m_externalInterface;

        ::caex::Mapping_ptr m_mappingObject;

        ::caex::RoleClass_ptr m_roleClass;

    };

} // caex

#endif // CAEX_ROLEREQUIREMENTS_HPP

