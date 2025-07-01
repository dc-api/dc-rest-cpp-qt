/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIVoiceRegionResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIVoiceRegionResponse::OAIVoiceRegionResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVoiceRegionResponse::OAIVoiceRegionResponse() {
    this->initializeModel();
}

OAIVoiceRegionResponse::~OAIVoiceRegionResponse() {}

void OAIVoiceRegionResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_custom_isSet = false;
    m_custom_isValid = false;

    m_deprecated_isSet = false;
    m_deprecated_isValid = false;

    m_optimal_isSet = false;
    m_optimal_isValid = false;
}

void OAIVoiceRegionResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVoiceRegionResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_custom_isValid = ::dc_rest::fromJsonValue(m_custom, json[QString("custom")]);
    m_custom_isSet = !json[QString("custom")].isNull() && m_custom_isValid;

    m_deprecated_isValid = ::dc_rest::fromJsonValue(m_deprecated, json[QString("deprecated")]);
    m_deprecated_isSet = !json[QString("deprecated")].isNull() && m_deprecated_isValid;

    m_optimal_isValid = ::dc_rest::fromJsonValue(m_optimal, json[QString("optimal")]);
    m_optimal_isSet = !json[QString("optimal")].isNull() && m_optimal_isValid;
}

QString OAIVoiceRegionResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVoiceRegionResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_custom_isSet) {
        obj.insert(QString("custom"), ::dc_rest::toJsonValue(m_custom));
    }
    if (m_deprecated_isSet) {
        obj.insert(QString("deprecated"), ::dc_rest::toJsonValue(m_deprecated));
    }
    if (m_optimal_isSet) {
        obj.insert(QString("optimal"), ::dc_rest::toJsonValue(m_optimal));
    }
    return obj;
}

QString OAIVoiceRegionResponse::getId() const {
    return m_id;
}
void OAIVoiceRegionResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIVoiceRegionResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIVoiceRegionResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIVoiceRegionResponse::getName() const {
    return m_name;
}
void OAIVoiceRegionResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIVoiceRegionResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAIVoiceRegionResponse::is_name_Valid() const{
    return m_name_isValid;
}

bool OAIVoiceRegionResponse::isCustom() const {
    return m_custom;
}
void OAIVoiceRegionResponse::setCustom(const bool &custom) {
    m_custom = custom;
    m_custom_isSet = true;
}

bool OAIVoiceRegionResponse::is_custom_Set() const{
    return m_custom_isSet;
}

bool OAIVoiceRegionResponse::is_custom_Valid() const{
    return m_custom_isValid;
}

bool OAIVoiceRegionResponse::isDeprecated() const {
    return m_deprecated;
}
void OAIVoiceRegionResponse::setDeprecated(const bool &deprecated) {
    m_deprecated = deprecated;
    m_deprecated_isSet = true;
}

bool OAIVoiceRegionResponse::is_deprecated_Set() const{
    return m_deprecated_isSet;
}

bool OAIVoiceRegionResponse::is_deprecated_Valid() const{
    return m_deprecated_isValid;
}

bool OAIVoiceRegionResponse::isOptimal() const {
    return m_optimal;
}
void OAIVoiceRegionResponse::setOptimal(const bool &optimal) {
    m_optimal = optimal;
    m_optimal_isSet = true;
}

bool OAIVoiceRegionResponse::is_optimal_Set() const{
    return m_optimal_isSet;
}

bool OAIVoiceRegionResponse::is_optimal_Valid() const{
    return m_optimal_isValid;
}

bool OAIVoiceRegionResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_custom_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_deprecated_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_optimal_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVoiceRegionResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_name_isValid && m_custom_isValid && m_deprecated_isValid && m_optimal_isValid && true;
}

} // namespace dc_rest
