// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InterfaceIDMapping.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterfaceIDMapping.hpp"
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/ExternalInterface.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
InterfaceIDMapping::InterfaceIDMapping() :
        m_roleInterface(0), m_systemUnitInterface(0)
{

    /*PROTECTED REGION ID(InterfaceIDMappingImpl__InterfaceIDMappingImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InterfaceIDMapping::~InterfaceIDMapping()
{
}

/*PROTECTED REGION ID(InterfaceIDMapping.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String InterfaceIDMapping::getRoleInterfaceID() const
{
    return m_roleInterfaceID;
}

void InterfaceIDMapping::setRoleInterfaceID(::type::String _roleInterfaceID)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_roleInterfaceID = m_roleInterfaceID;
#endif
    m_roleInterfaceID = _roleInterfaceID;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInterfaceIDMapping__roleInterfaceID(),
                _old_roleInterfaceID,
                m_roleInterfaceID
        );
        eNotify(&notification);
    }
#endif
}

::type::String InterfaceIDMapping::getSystemUnitInterfaceID() const
{
    return m_systemUnitInterfaceID;
}

void InterfaceIDMapping::setSystemUnitInterfaceID(
        ::type::String _systemUnitInterfaceID)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_systemUnitInterfaceID = m_systemUnitInterfaceID;
#endif
    m_systemUnitInterfaceID = _systemUnitInterfaceID;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInterfaceIDMapping__systemUnitInterfaceID(),
                _old_systemUnitInterfaceID,
                m_systemUnitInterfaceID
        );
        eNotify(&notification);
    }
#endif
}

// References
::caex::ExternalInterface_ptr InterfaceIDMapping::getRoleInterface()
{
    return m_roleInterface;
}

void InterfaceIDMapping::setRoleInterface(
        ::caex::ExternalInterface_ptr _roleInterface)
{
    ::caex::ExternalInterface_ptr _old_roleInterface = m_roleInterface;

    m_roleInterface = _roleInterface;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInterfaceIDMapping__roleInterface(),
                _old_roleInterface,
                m_roleInterface
        );
        eNotify(&notification);
    }
#endif

}

::caex::ExternalInterface_ptr InterfaceIDMapping::getSystemUnitInterface()
{
    return m_systemUnitInterface;
}

void InterfaceIDMapping::setSystemUnitInterface(
        ::caex::ExternalInterface_ptr _systemUnitInterface)
{
    ::caex::ExternalInterface_ptr _old_systemUnitInterface =
            m_systemUnitInterface;

    m_systemUnitInterface = _systemUnitInterface;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInterfaceIDMapping__systemUnitInterface(),
                _old_systemUnitInterface,
                m_systemUnitInterface
        );
        eNotify(&notification);
    }
#endif

}

