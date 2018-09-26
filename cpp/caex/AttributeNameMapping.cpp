// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/AttributeNameMapping.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AttributeNameMapping.hpp"
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
AttributeNameMapping::AttributeNameMapping() :
        m_roleAttribute(0), m_systemUnitAttribute(0)
{

    /*PROTECTED REGION ID(AttributeNameMappingImpl__AttributeNameMappingImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AttributeNameMapping::~AttributeNameMapping()
{
}

/*PROTECTED REGION ID(AttributeNameMapping.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String AttributeNameMapping::getRoleAttributeName() const
{
    return m_roleAttributeName;
}

void AttributeNameMapping::setRoleAttributeName(
        ::type::String _roleAttributeName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_roleAttributeName = m_roleAttributeName;
#endif
    m_roleAttributeName = _roleAttributeName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttributeNameMapping__roleAttributeName(),
                _old_roleAttributeName,
                m_roleAttributeName
        );
        eNotify(&notification);
    }
#endif
}

::type::String AttributeNameMapping::getSystemUnitAttributeName() const
{
    return m_systemUnitAttributeName;
}

void AttributeNameMapping::setSystemUnitAttributeName(
        ::type::String _systemUnitAttributeName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_systemUnitAttributeName = m_systemUnitAttributeName;
#endif
    m_systemUnitAttributeName = _systemUnitAttributeName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttributeNameMapping__systemUnitAttributeName(),
                _old_systemUnitAttributeName,
                m_systemUnitAttributeName
        );
        eNotify(&notification);
    }
#endif
}

// References
::caex::Attribute_ptr AttributeNameMapping::getRoleAttribute()
{
    return m_roleAttribute;
}

void AttributeNameMapping::setRoleAttribute(
        ::caex::Attribute_ptr _roleAttribute)
{
    ::caex::Attribute_ptr _old_roleAttribute = m_roleAttribute;

    m_roleAttribute = _roleAttribute;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttributeNameMapping__roleAttribute(),
                _old_roleAttribute,
                m_roleAttribute
        );
        eNotify(&notification);
    }
#endif

}

::caex::Attribute_ptr AttributeNameMapping::getSystemUnitAttribute()
{
    return m_systemUnitAttribute;
}

void AttributeNameMapping::setSystemUnitAttribute(
        ::caex::Attribute_ptr _systemUnitAttribute)
{
    ::caex::Attribute_ptr _old_systemUnitAttribute = m_systemUnitAttribute;

    m_systemUnitAttribute = _systemUnitAttribute;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttributeNameMapping__systemUnitAttribute(),
                _old_systemUnitAttribute,
                m_systemUnitAttribute
        );
        eNotify(&notification);
    }
#endif

}

