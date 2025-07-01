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

#include "OAIScheduledEventUserResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIScheduledEventUserResponse::OAIScheduledEventUserResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScheduledEventUserResponse::OAIScheduledEventUserResponse() {
    this->initializeModel();
}

OAIScheduledEventUserResponse::~OAIScheduledEventUserResponse() {}

void OAIScheduledEventUserResponse::initializeModel() {

    m_guild_scheduled_event_id_isSet = false;
    m_guild_scheduled_event_id_isValid = false;

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_member_isSet = false;
    m_member_isValid = false;
}

void OAIScheduledEventUserResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIScheduledEventUserResponse::fromJsonObject(QJsonObject json) {

    m_guild_scheduled_event_id_isValid = ::dc_rest::fromJsonValue(m_guild_scheduled_event_id, json[QString("guild_scheduled_event_id")]);
    m_guild_scheduled_event_id_isSet = !json[QString("guild_scheduled_event_id")].isNull() && m_guild_scheduled_event_id_isValid;

    m_user_id_isValid = ::dc_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_member_isValid = ::dc_rest::fromJsonValue(m_member, json[QString("member")]);
    m_member_isSet = !json[QString("member")].isNull() && m_member_isValid;
}

QString OAIScheduledEventUserResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIScheduledEventUserResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_guild_scheduled_event_id_isSet) {
        obj.insert(QString("guild_scheduled_event_id"), ::dc_rest::toJsonValue(m_guild_scheduled_event_id));
    }
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::dc_rest::toJsonValue(m_user_id));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    if (m_member.isSet()) {
        obj.insert(QString("member"), ::dc_rest::toJsonValue(m_member));
    }
    return obj;
}

QString OAIScheduledEventUserResponse::getGuildScheduledEventId() const {
    return m_guild_scheduled_event_id;
}
void OAIScheduledEventUserResponse::setGuildScheduledEventId(const QString &guild_scheduled_event_id) {
    m_guild_scheduled_event_id = guild_scheduled_event_id;
    m_guild_scheduled_event_id_isSet = true;
}

bool OAIScheduledEventUserResponse::is_guild_scheduled_event_id_Set() const{
    return m_guild_scheduled_event_id_isSet;
}

bool OAIScheduledEventUserResponse::is_guild_scheduled_event_id_Valid() const{
    return m_guild_scheduled_event_id_isValid;
}

QString OAIScheduledEventUserResponse::getUserId() const {
    return m_user_id;
}
void OAIScheduledEventUserResponse::setUserId(const QString &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAIScheduledEventUserResponse::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAIScheduledEventUserResponse::is_user_id_Valid() const{
    return m_user_id_isValid;
}

OAIUserResponse OAIScheduledEventUserResponse::getUser() const {
    return m_user;
}
void OAIScheduledEventUserResponse::setUser(const OAIUserResponse &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIScheduledEventUserResponse::is_user_Set() const{
    return m_user_isSet;
}

bool OAIScheduledEventUserResponse::is_user_Valid() const{
    return m_user_isValid;
}

OAIGuildMemberResponse OAIScheduledEventUserResponse::getMember() const {
    return m_member;
}
void OAIScheduledEventUserResponse::setMember(const OAIGuildMemberResponse &member) {
    m_member = member;
    m_member_isSet = true;
}

bool OAIScheduledEventUserResponse::is_member_Set() const{
    return m_member_isSet;
}

bool OAIScheduledEventUserResponse::is_member_Valid() const{
    return m_member_isValid;
}

bool OAIScheduledEventUserResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_guild_scheduled_event_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_member.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIScheduledEventUserResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_guild_scheduled_event_id_isValid && m_user_id_isValid && true;
}

} // namespace dc_rest
