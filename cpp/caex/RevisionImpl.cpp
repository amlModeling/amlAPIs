// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/RevisionImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Revision.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXBasicObject.hpp>
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

/*PROTECTED REGION ID(RevisionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Revision::_initialize()
{
    // Supertypes
    ::caex::CAEXBasicObject::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(RevisionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Revision::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::REVISION__REVISIONDATE:
    {
        ::ecorecpp::mapping::any_traits < ::type::DateTime
                > ::toAny(_any, m_revisionDate);
    }
        return _any;
    case ::caex::CaexPackage::REVISION__OLDVERSION:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_oldVersion);
    }
        return _any;
    case ::caex::CaexPackage::REVISION__NEWVERSION:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_newVersion);
    }
        return _any;
    case ::caex::CaexPackage::REVISION__AUTHORNAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_authorName);
    }
        return _any;
    case ::caex::CaexPackage::REVISION__COMMENT:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_comment);
    }
        return _any;

    }
    throw "Error";
}

void Revision::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::REVISION__REVISIONDATE:
    {
        ::ecorecpp::mapping::any_traits < ::type::DateTime
                > ::fromAny(_newValue, m_revisionDate);
    }
        return;
    case ::caex::CaexPackage::REVISION__OLDVERSION:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_oldVersion);
    }
        return;
    case ::caex::CaexPackage::REVISION__NEWVERSION:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_newVersion);
    }
        return;
    case ::caex::CaexPackage::REVISION__AUTHORNAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_authorName);
    }
        return;
    case ::caex::CaexPackage::REVISION__COMMENT:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_comment);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Revision::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::REVISION__REVISIONDATE:
        return ::ecorecpp::mapping::set_traits < ::type::DateTime
                > ::is_set(m_revisionDate);
    case ::caex::CaexPackage::REVISION__OLDVERSION:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_oldVersion);
    case ::caex::CaexPackage::REVISION__NEWVERSION:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_newVersion);
    case ::caex::CaexPackage::REVISION__AUTHORNAME:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_authorName);
    case ::caex::CaexPackage::REVISION__COMMENT:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_comment);

    }
    throw "Error";
}

void Revision::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Revision::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getRevision();
    return _eclass;
}

