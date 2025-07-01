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

#include "OAICreate_channel_invite_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICreate_channel_invite_request::OAICreate_channel_invite_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreate_channel_invite_request::OAICreate_channel_invite_request() {
    this->initializeModel();
}

OAICreate_channel_invite_request::~OAICreate_channel_invite_request() {}

void OAICreate_channel_invite_request::initializeModel() {

    m_max_age_isSet = false;
    m_max_age_isValid = false;

    m_temporary_isSet = false;
    m_temporary_isValid = false;

    m_max_uses_isSet = false;
    m_max_uses_isValid = false;

    m_unique_isSet = false;
    m_unique_isValid = false;

    m_target_user_id_isSet = false;
    m_target_user_id_isValid = false;

    m_target_application_id_isSet = false;
    m_target_application_id_isValid = false;

    m_target_type_isSet = false;
    m_target_type_isValid = false;
}

void OAICreate_channel_invite_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreate_channel_invite_request::fromJsonObject(QJsonObject json) {

    m_max_age_isValid = ::dc_rest::fromJsonValue(m_max_age, json[QString("max_age")]);
    m_max_age_isSet = !json[QString("max_age")].isNull() && m_max_age_isValid;

    m_temporary_isValid = ::dc_rest::fromJsonValue(m_temporary, json[QString("temporary")]);
    m_temporary_isSet = !json[QString("temporary")].isNull() && m_temporary_isValid;

    m_max_uses_isValid = ::dc_rest::fromJsonValue(m_max_uses, json[QString("max_uses")]);
    m_max_uses_isSet = !json[QString("max_uses")].isNull() && m_max_uses_isValid;

    m_unique_isValid = ::dc_rest::fromJsonValue(m_unique, json[QString("unique")]);
    m_unique_isSet = !json[QString("unique")].isNull() && m_unique_isValid;

    m_target_user_id_isValid = ::dc_rest::fromJsonValue(m_target_user_id, json[QString("target_user_id")]);
    m_target_user_id_isSet = !json[QString("target_user_id")].isNull() && m_target_user_id_isValid;

    m_target_application_id_isValid = ::dc_rest::fromJsonValue(m_target_application_id, json[QString("target_application_id")]);
    m_target_application_id_isSet = !json[QString("target_application_id")].isNull() && m_target_application_id_isValid;

    m_target_type_isValid = ::dc_rest::fromJsonValue(m_target_type, json[QString("target_type")]);
    m_target_type_isSet = !json[QString("target_type")].isNull() && m_target_type_isValid;
}

QString OAICreate_channel_invite_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreate_channel_invite_request::asJsonObject() const {
    QJsonObject obj;
    if (m_max_age_isSet) {
        obj.insert(QString("max_age"), ::dc_rest::toJsonValue(m_max_age));
    }
    if (m_temporary_isSet) {
        obj.insert(QString("temporary"), ::dc_rest::toJsonValue(m_temporary));
    }
    if (m_max_uses_isSet) {
        obj.insert(QString("max_uses"), ::dc_rest::toJsonValue(m_max_uses));
    }
    if (m_unique_isSet) {
        obj.insert(QString("unique"), ::dc_rest::toJsonValue(m_unique));
    }
    if (m_target_user_id_isSet) {
        obj.insert(QString("target_user_id"), ::dc_rest::toJsonValue(m_target_user_id));
    }
    if (m_target_application_id_isSet) {
        obj.insert(QString("target_application_id"), ::dc_rest::toJsonValue(m_target_application_id));
    }
    if (m_target_type_isSet) {
        obj.insert(QString("target_type"), ::dc_rest::toJsonValue(m_target_type));
    }
    return obj;
}

qint32 OAICreate_channel_invite_request::getMaxAge() const {
    return m_max_age;
}
void OAICreate_channel_invite_request::setMaxAge(const qint32 &max_age) {
    m_max_age = max_age;
    m_max_age_isSet = true;
}

bool OAICreate_channel_invite_request::is_max_age_Set() const{
    return m_max_age_isSet;
}

bool OAICreate_channel_invite_request::is_max_age_Valid() const{
    return m_max_age_isValid;
}

bool OAICreate_channel_invite_request::isTemporary() const {
    return m_temporary;
}
void OAICreate_channel_invite_request::setTemporary(const bool &temporary) {
    m_temporary = temporary;
    m_temporary_isSet = true;
}

bool OAICreate_channel_invite_request::is_temporary_Set() const{
    return m_temporary_isSet;
}

bool OAICreate_channel_invite_request::is_temporary_Valid() const{
    return m_temporary_isValid;
}

qint32 OAICreate_channel_invite_request::getMaxUses() const {
    return m_max_uses;
}
void OAICreate_channel_invite_request::setMaxUses(const qint32 &max_uses) {
    m_max_uses = max_uses;
    m_max_uses_isSet = true;
}

bool OAICreate_channel_invite_request::is_max_uses_Set() const{
    return m_max_uses_isSet;
}

bool OAICreate_channel_invite_request::is_max_uses_Valid() const{
    return m_max_uses_isValid;
}

bool OAICreate_channel_invite_request::isUnique() const {
    return m_unique;
}
void OAICreate_channel_invite_request::setUnique(const bool &unique) {
    m_unique = unique;
    m_unique_isSet = true;
}

bool OAICreate_channel_invite_request::is_unique_Set() const{
    return m_unique_isSet;
}

bool OAICreate_channel_invite_request::is_unique_Valid() const{
    return m_unique_isValid;
}

QString OAICreate_channel_invite_request::getTargetUserId() const {
    return m_target_user_id;
}
void OAICreate_channel_invite_request::setTargetUserId(const QString &target_user_id) {
    m_target_user_id = target_user_id;
    m_target_user_id_isSet = true;
}

bool OAICreate_channel_invite_request::is_target_user_id_Set() const{
    return m_target_user_id_isSet;
}

bool OAICreate_channel_invite_request::is_target_user_id_Valid() const{
    return m_target_user_id_isValid;
}

QString OAICreate_channel_invite_request::getTargetApplicationId() const {
    return m_target_application_id;
}
void OAICreate_channel_invite_request::setTargetApplicationId(const QString &target_application_id) {
    m_target_application_id = target_application_id;
    m_target_application_id_isSet = true;
}

bool OAICreate_channel_invite_request::is_target_application_id_Set() const{
    return m_target_application_id_isSet;
}

bool OAICreate_channel_invite_request::is_target_application_id_Valid() const{
    return m_target_application_id_isValid;
}

qint32 OAICreate_channel_invite_request::getTargetType() const {
    return m_target_type;
}
void OAICreate_channel_invite_request::setTargetType(const qint32 &target_type) {
    m_target_type = target_type;
    m_target_type_isSet = true;
}

bool OAICreate_channel_invite_request::is_target_type_Set() const{
    return m_target_type_isSet;
}

bool OAICreate_channel_invite_request::is_target_type_Valid() const{
    return m_target_type_isValid;
}

bool OAICreate_channel_invite_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_max_age_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_temporary_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_uses_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_unique_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_application_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_target_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICreate_channel_invite_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
