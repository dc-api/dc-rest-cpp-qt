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

#include "OAICreate_thread_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICreate_thread_request::OAICreate_thread_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreate_thread_request::OAICreate_thread_request() {
    this->initializeModel();
}

OAICreate_thread_request::~OAICreate_thread_request() {}

void OAICreate_thread_request::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;

    m_auto_archive_duration_isSet = false;
    m_auto_archive_duration_isValid = false;

    m_rate_limit_per_user_isSet = false;
    m_rate_limit_per_user_isValid = false;

    m_applied_tags_isSet = false;
    m_applied_tags_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_invitable_isSet = false;
    m_invitable_isValid = false;
}

void OAICreate_thread_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreate_thread_request::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_message_isValid = ::dc_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;

    m_auto_archive_duration_isValid = ::dc_rest::fromJsonValue(m_auto_archive_duration, json[QString("auto_archive_duration")]);
    m_auto_archive_duration_isSet = !json[QString("auto_archive_duration")].isNull() && m_auto_archive_duration_isValid;

    m_rate_limit_per_user_isValid = ::dc_rest::fromJsonValue(m_rate_limit_per_user, json[QString("rate_limit_per_user")]);
    m_rate_limit_per_user_isSet = !json[QString("rate_limit_per_user")].isNull() && m_rate_limit_per_user_isValid;

    m_applied_tags_isValid = ::dc_rest::fromJsonValue(m_applied_tags, json[QString("applied_tags")]);
    m_applied_tags_isSet = !json[QString("applied_tags")].isNull() && m_applied_tags_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_invitable_isValid = ::dc_rest::fromJsonValue(m_invitable, json[QString("invitable")]);
    m_invitable_isSet = !json[QString("invitable")].isNull() && m_invitable_isValid;
}

QString OAICreate_thread_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreate_thread_request::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_message.isSet()) {
        obj.insert(QString("message"), ::dc_rest::toJsonValue(m_message));
    }
    if (m_auto_archive_duration_isSet) {
        obj.insert(QString("auto_archive_duration"), ::dc_rest::toJsonValue(m_auto_archive_duration));
    }
    if (m_rate_limit_per_user_isSet) {
        obj.insert(QString("rate_limit_per_user"), ::dc_rest::toJsonValue(m_rate_limit_per_user));
    }
    if (m_applied_tags.size() > 0) {
        obj.insert(QString("applied_tags"), ::dc_rest::toJsonValue(m_applied_tags));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_invitable_isSet) {
        obj.insert(QString("invitable"), ::dc_rest::toJsonValue(m_invitable));
    }
    return obj;
}

QString OAICreate_thread_request::getName() const {
    return m_name;
}
void OAICreate_thread_request::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICreate_thread_request::is_name_Set() const{
    return m_name_isSet;
}

bool OAICreate_thread_request::is_name_Valid() const{
    return m_name_isValid;
}

OAIBaseCreateMessageCreateRequest OAICreate_thread_request::getMessage() const {
    return m_message;
}
void OAICreate_thread_request::setMessage(const OAIBaseCreateMessageCreateRequest &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAICreate_thread_request::is_message_Set() const{
    return m_message_isSet;
}

bool OAICreate_thread_request::is_message_Valid() const{
    return m_message_isValid;
}

qint32 OAICreate_thread_request::getAutoArchiveDuration() const {
    return m_auto_archive_duration;
}
void OAICreate_thread_request::setAutoArchiveDuration(const qint32 &auto_archive_duration) {
    m_auto_archive_duration = auto_archive_duration;
    m_auto_archive_duration_isSet = true;
}

bool OAICreate_thread_request::is_auto_archive_duration_Set() const{
    return m_auto_archive_duration_isSet;
}

bool OAICreate_thread_request::is_auto_archive_duration_Valid() const{
    return m_auto_archive_duration_isValid;
}

qint32 OAICreate_thread_request::getRateLimitPerUser() const {
    return m_rate_limit_per_user;
}
void OAICreate_thread_request::setRateLimitPerUser(const qint32 &rate_limit_per_user) {
    m_rate_limit_per_user = rate_limit_per_user;
    m_rate_limit_per_user_isSet = true;
}

bool OAICreate_thread_request::is_rate_limit_per_user_Set() const{
    return m_rate_limit_per_user_isSet;
}

bool OAICreate_thread_request::is_rate_limit_per_user_Valid() const{
    return m_rate_limit_per_user_isValid;
}

QList<QString> OAICreate_thread_request::getAppliedTags() const {
    return m_applied_tags;
}
void OAICreate_thread_request::setAppliedTags(const QList<QString> &applied_tags) {
    m_applied_tags = applied_tags;
    m_applied_tags_isSet = true;
}

bool OAICreate_thread_request::is_applied_tags_Set() const{
    return m_applied_tags_isSet;
}

bool OAICreate_thread_request::is_applied_tags_Valid() const{
    return m_applied_tags_isValid;
}

qint32 OAICreate_thread_request::getType() const {
    return m_type;
}
void OAICreate_thread_request::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAICreate_thread_request::is_type_Set() const{
    return m_type_isSet;
}

bool OAICreate_thread_request::is_type_Valid() const{
    return m_type_isValid;
}

bool OAICreate_thread_request::isInvitable() const {
    return m_invitable;
}
void OAICreate_thread_request::setInvitable(const bool &invitable) {
    m_invitable = invitable;
    m_invitable_isSet = true;
}

bool OAICreate_thread_request::is_invitable_Set() const{
    return m_invitable_isSet;
}

bool OAICreate_thread_request::is_invitable_Valid() const{
    return m_invitable_isValid;
}

bool OAICreate_thread_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message.isSet()) {
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

        if (m_applied_tags.size() > 0) {
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

bool OAICreate_thread_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_message_isValid && true;
}

} // namespace dc_rest
