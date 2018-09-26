// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CAEXBasicObjectImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CAEXBasicObject.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(CAEXBasicObjectImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void CAEXBasicObject::_initialize()
{
    // Supertypes

    // Rerefences
    if (m_description)
    {
        m_description->_initialize();
        m_description->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXBasicObject__description());
    }
    if (m_version)
    {
        m_version->_initialize();
        m_version->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXBasicObject__version());
    }
    for (size_t i = 0; i < m_revision->size(); i++)
    {
        (*m_revision)[i]->_initialize();
        (*m_revision)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXBasicObject__revision());
    }
    if (m_copyright)
    {
        m_copyright->_initialize();
        m_copyright->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXBasicObject__copyright());
    }
    for (size_t i = 0; i < m_additionalInformation->size(); i++)
    {
        (*m_additionalInformation)[i]->_initialize();
        (*m_additionalInformation)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXBasicObject__additionalInformation());
    }

    /*PROTECTED REGION ID(CAEXBasicObjectImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CAEXBasicObject::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::CAEXBASICOBJECT__CHANGEMODE:
    {
        ::ecorecpp::mapping::any_traits < ::caex::ChangeMode
                > ::toAny(_any, m_changeMode);
    }
        return _any;
    case ::caex::CaexPackage::CAEXBASICOBJECT__DESCRIPTION:
    {
        _any = static_cast< ::ecore::EObject* >(m_description);
    }
        return _any;
    case ::caex::CaexPackage::CAEXBASICOBJECT__VERSION:
    {
        _any = static_cast< ::ecore::EObject* >(m_version);
    }
        return _any;
    case ::caex::CaexPackage::CAEXBASICOBJECT__REVISION:
    {
        _any = m_revision->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::CAEXBASICOBJECT__COPYRIGHT:
    {
        _any = static_cast< ::ecore::EObject* >(m_copyright);
    }
        return _any;
    case ::caex::CaexPackage::CAEXBASICOBJECT__ADDITIONALINFORMATION:
    {
        _any = m_additionalInformation->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void CAEXBasicObject::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::CAEXBASICOBJECT__CHANGEMODE:
    {
        ::ecorecpp::mapping::any_traits < ::caex::ChangeMode
                > ::fromAny(_newValue, m_changeMode);
    }
        return;
    case ::caex::CaexPackage::CAEXBASICOBJECT__DESCRIPTION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::Description_ptr _t1 =
                dynamic_cast< ::caex::Description_ptr >(_t0);
        ::caex::CAEXBasicObject::setDescription(_t1);
    }
        return;
    case ::caex::CaexPackage::CAEXBASICOBJECT__VERSION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::Version_ptr _t1 = dynamic_cast< ::caex::Version_ptr >(_t0);
        ::caex::CAEXBasicObject::setVersion(_t1);
    }
        return;
    case ::caex::CaexPackage::CAEXBASICOBJECT__REVISION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::CAEXBasicObject::getRevision().clear();
        ::caex::CAEXBasicObject::getRevision().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::CAEXBASICOBJECT__COPYRIGHT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::Copyright_ptr _t1 = dynamic_cast< ::caex::Copyright_ptr >(_t0);
        ::caex::CAEXBasicObject::setCopyright(_t1);
    }
        return;
    case ::caex::CaexPackage::CAEXBASICOBJECT__ADDITIONALINFORMATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::CAEXBasicObject::getAdditionalInformation().clear();
        ::caex::CAEXBasicObject::getAdditionalInformation().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CAEXBasicObject::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::CAEXBASICOBJECT__CHANGEMODE:
        return m_changeMode != state;
    case ::caex::CaexPackage::CAEXBASICOBJECT__DESCRIPTION:
        return m_description;
    case ::caex::CaexPackage::CAEXBASICOBJECT__VERSION:
        return m_version;
    case ::caex::CaexPackage::CAEXBASICOBJECT__REVISION:
        return m_revision && m_revision->size();
    case ::caex::CaexPackage::CAEXBASICOBJECT__COPYRIGHT:
        return m_copyright;
    case ::caex::CaexPackage::CAEXBASICOBJECT__ADDITIONALINFORMATION:
        return m_additionalInformation && m_additionalInformation->size();

    }
    throw "Error";
}

void CAEXBasicObject::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CAEXBasicObject::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getCAEXBasicObject();
    return _eclass;
}

