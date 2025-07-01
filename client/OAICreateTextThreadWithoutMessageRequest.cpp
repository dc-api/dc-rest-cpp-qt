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

#include "OAICreateTextThreadWithoutMessageRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICreateTextThreadWithoutMessageRequest::OAICreateTextThreadWithoutMessageRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreateTextThreadWithoutMessageRequest::OAICreateTextThreadWithoutMessageRequest() {
    this->initializeModel();
}

OAICreateTextThreadWithoutMessageRequest::~OAICreateTextThreadWithoutMessageRequest() {}

void OAICreateTextThreadWithoutMessageRequest::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_auto_archive_duration_isSet = false;
    m_auto_archive_duration_isValid = false;

    m_rate_limit_per_user_isSet = false;
    m_rate_limit_per_user_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_invitable_isSet = false;
    m_invitable_isValid = false;
}

void OAICreateTextThreadWithoutMessageRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreateTextThreadWithoutMessageRequest::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_auto_archive_duration_isValid = ::dc_rest::fromJsonValue(m_auto_archive_duration, json[QString("auto_archive_duration")]);
    m_auto_archive_duration_isSet = !json[QString("auto_archive_duration")].isNull() && m_auto_archive_duration_isValid;

    m_rate_limit_per_user_isValid = ::dc_rest::fromJsonValue(m_rate_limit_per_user, json[QString("rate_limit_per_user")]);
    m_rate_limit_per_user_isSet = !json[QString("rate_limit_per_user")].isNull() && m_rate_limit_per_user_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_invitable_isValid = ::dc_rest::fromJsonValue(m_invitable, json[QString("invitable")]);
    m_invitable_isSet = !json[QString("invitable")].isNull() && m_invitable_isValid;
}

QString OAICreateTextThreadWithoutMessageRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreateTextThreadWithoutMessageRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_auto_archive_duration_isSet) {
        obj.insert(QString("auto_archive_duration"), ::dc_rest::toJsonValue(m_auto_archive_duration));
    }
    if (m_rate_limit_per_user_isSet) {
        obj.insert(QString("rate_limit_per_user"), ::dc_rest::toJsonValue(m_rate_limit_per_user));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_invitable_isSet) {
        obj.insert(QString("invitable"), ::dc_rest::toJsonValue(m_invitable));
    }
    return obj;
}

QString OAICreateTextThreadWithoutMessageRequest::getName() const {
    return m_name;
}
void OAICreateTextThreadWithoutMessageRequest::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICreateTextThreadWithoutMessageRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAICreateTextThreadWithoutMessageRequest::is_name_Valid() const{
    return m_name_isValid;
}

qint32 OAICreateTextThreadWithoutMessageRequest::getAutoArchiveDuration() const {
    return m_auto_archive_duration;
}
void OAICreateTextThreadWithoutMessageRequest::setAutoArchiveDuration(const qint32 &auto_archive_duration) {
    m_auto_archive_duration = auto_archive_duration;
    m_auto_archive_duration_isSet = true;
}

bool OAICreateTextThreadWithoutMessageRequest::is_auto_archive_duration_Set() const{
    return m_auto_archive_duration_isSet;
}

bool OAICreateTextThreadWithoutMessageRequest::is_auto_archive_duration_Valid() const{
    return m_auto_archive_duration_isValid;
}

qint32 OAICreateTextThreadWithoutMessageRequest::getRateLimitPerUser() const {
    return m_rate_limit_per_user;
}
void OAICreateTextThreadWithoutMessageRequest::setRateLimitPerUser(const qint32 &rate_limit_per_user) {
    m_rate_limit_per_user = rate_limit_per_user;
    m_rate_limit_per_user_isSet = true;
}

bool OAICreateTextThreadWithoutMessageRequest::is_rate_limit_per_user_Set() const{
    return m_rate_limit_per_user_isSet;
}

bool OAICreateTextThreadWithoutMessageRequest::is_rate_limit_per_user_Valid() const{
    return m_rate_limit_per_user_isValid;
}

qint32 OAICreateTextThreadWithoutMessageRequest::getType() const {
    return m_type;
}
void OAICreateTextThreadWithoutMessageRequest::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAICreateTextThreadWithoutMessageRequest::is_type_Set() const{
    return m_type_isSet;
}

bool OAICreateTextThreadWithoutMessageRequest::is_type_Valid() const{
    return m_type_isValid;
}

bool OAICreateTextThreadWithoutMessageRequest::isInvitable() const {
    return m_invitable;
}
void OAICreateTextThreadWithoutMessageRequest::setInvitable(const bool &invitable) {
    m_invitable = invitable;
    m_invitable_isSet = true;
}

bool OAICreateTextThreadWithoutMessageRequest::is_invitable_Set() const{
    return m_invitable_isSet;
}

bool OAICreateTextThreadWithoutMessageRequest::is_invitable_Valid() const{
    return m_invitable_isValid;
}

bool OAICreateTextThreadWithoutMessageRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_auto_archive_duration_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rate_limit_per_user_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invitable_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICreateTextThreadWithoutMessageRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && true;
}

} // namespace dc_rest
