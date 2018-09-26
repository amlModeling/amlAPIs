// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InterfaceIDMapping.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef CAEX_INTERFACEIDMAPPING_HPP
#define CAEX_INTERFACEIDMAPPING_HPP

#include <caex_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <type_forward.hpp>
#include <caex/CAEXBasicObject.hpp>

/*PROTECTED REGION ID(InterfaceIDMapping_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace caex
{

    class InterfaceIDMapping: public virtual ::caex::CAEXBasicObject
    {
    public:
        InterfaceIDMapping();

        virtual ~InterfaceIDMapping();

        virtual void _initialize();

        // Operations

        // Attributes
        ::type::String getRoleInterfaceID() const;
        void setRoleInterfaceID(::type::String _roleInterfaceID);

        ::type::String getSystemUnitInterfaceID() const;
        void setSystemUnitInterfaceID(::type::String _systemUnitInterfaceID);

        // References
        ::caex::ExternalInterface_ptr getRoleInterface();
        void setRoleInterface(::caex::ExternalInterface_ptr _roleInterface);

        ::caex::ExternalInterface_ptr getSystemUnitInterface();
        void setSystemUnitInterface(
                ::caex::ExternalInterface_ptr _systemUnitInterface);

        /*PROTECTED REGION ID(InterfaceIDMapping) START*/
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

        /*PROTECTED REGION ID(InterfaceIDMappingImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        // Attributes

        ::type::String m_roleInterfaceID;

        ::type::String m_systemUnitInterfaceID;

        // References

        ::caex::ExternalInterface_ptr m_roleInterface;

        ::caex::ExternalInterface_ptr m_systemUnitInterface;

    };

} // caex

#endif // CAEX_INTERFACEIDMAPPING_HPP

