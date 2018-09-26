// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/DocumentRoot.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DocumentRoot.hpp"
#include <ecore/EStringToStringMapEntry.hpp>
#include <caex/CAEXFile.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
DocumentRoot::DocumentRoot()
{

    m_xMLNSPrefixMap.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::EStringToStringMapEntry, -1, true, false >(this,
                    NULL));
    m_xSISchemaLocation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::ecore::EStringToStringMapEntry, -1, true, false >(this,
                    NULL));
    m_cAEXFile.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::CAEXFile, -2,
                    true, false >(this, NULL));

    /*PROTECTED REGION ID(DocumentRootImpl__DocumentRootImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

DocumentRoot::~DocumentRoot()
{
}

/*PROTECTED REGION ID(DocumentRoot.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
std::vector< ::ecore::EFeatureMapEntry > const& DocumentRoot::getMixed() const
{
    return m_mixed;
}

void DocumentRoot::setMixed(std::vector< ::ecore::EFeatureMapEntry > _mixed)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::ecore::EFeatureMapEntry > _old_mixed = m_mixed;
#endif
    m_mixed = _mixed;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getDocumentRoot__mixed(),
                _old_mixed,
                m_mixed
        );
        eNotify(&notification);
    }
#endif
}

void DocumentRoot::addMixed(
        ::ecore::EFeatureMapEntry const& _new_element_in_mixed)
{
    m_mixed.push_back(_new_element_in_mixed);
}

void DocumentRoot::setMixedAt(size_t _position,
        ::ecore::EFeatureMapEntry const& _new_element_in_mixed)
{
    if (_position >= m_mixed.size())
        m_mixed.resize(_position + 1, 0);

    m_mixed[_position] = _new_element_in_mixed;
}

void DocumentRoot::deleteMixedAt(size_t _position)
{
    if (_position >= m_mixed.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_mixed.size() - 1)
        m_mixed.resize(_position);
}

// References
::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry >& DocumentRoot::getXMLNSPrefixMap()
{
    return *m_xMLNSPrefixMap;
}

::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry >& DocumentRoot::getXSISchemaLocation()
{
    return *m_xSISchemaLocation;
}

::ecorecpp::mapping::EList< ::caex::CAEXFile >& DocumentRoot::getCAEXFile()
{
    return *m_cAEXFile;
}

