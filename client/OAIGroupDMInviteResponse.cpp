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

#include "OAIGroupDMInviteResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGroupDMInviteResponse::OAIGroupDMInviteResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGroupDMInviteResponse::OAIGroupDMInviteResponse() {
    this->initializeModel();
}

OAIGroupDMInviteResponse::~OAIGroupDMInviteResponse() {}

void OAIGroupDMInviteResponse::initializeModel() {

    m_code_isSet = false;
    m_code_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_inviter_isSet = false;
    m_inviter_isValid = false;

    m_max_age_isSet = false;
    m_max_age_isValid = false;

    m_created_at_isSet = false;
    m_created_at_isValid = false;

    m_expires_at_isSet = false;
    m_expires_at_isValid = false;

    m_channel_isSet = false;
    m_channel_isValid = false;

    m_approximate_member_count_isSet = false;
    m_approximate_member_count_isValid = false;
}

void OAIGroupDMInviteResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGroupDMInviteResponse::fromJsonObject(QJsonObject json) {

    m_code_isValid = ::dc_rest::fromJsonValue(m_code, json[QString("code")]);
    m_code_isSet = !json[QString("code")].isNull() && m_code_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_inviter_isValid = ::dc_rest::fromJsonValue(m_inviter, json[QString("inviter")]);
    m_inviter_isSet = !json[QString("inviter")].isNull() && m_inviter_isValid;

    m_max_age_isValid = ::dc_rest::fromJsonValue(m_max_age, json[QString("max_age")]);
    m_max_age_isSet = !json[QString("max_age")].isNull() && m_max_age_isValid;

    m_created_at_isValid = ::dc_rest::fromJsonValue(m_created_at, json[QString("created_at")]);
    m_created_at_isSet = !json[QString("created_at")].isNull() && m_created_at_isValid;

    m_expires_at_isValid = ::dc_rest::fromJsonValue(m_expires_at, json[QString("expires_at")]);
    m_expires_at_isSet = !json[QString("expires_at")].isNull() && m_expires_at_isValid;

    m_channel_isValid = ::dc_rest::fromJsonValue(m_channel, json[QString("channel")]);
    m_channel_isSet = !json[QString("channel")].isNull() && m_channel_isValid;

    m_approximate_member_count_isValid = ::dc_rest::fromJsonValue(m_approximate_member_count, json[QString("approximate_member_count")]);
    m_approximate_member_count_isSet = !json[QString("approximate_member_count")].isNull() && m_approximate_member_count_isValid;
}

QString OAIGroupDMInviteResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGroupDMInviteResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_code_isSet) {
        obj.insert(QString("code"), ::dc_rest::toJsonValue(m_code));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_inviter.isSet()) {
        obj.insert(QString("inviter"), ::dc_rest::toJsonValue(m_inviter));
    }
    if (m_max_age_isSet) {
        obj.insert(QString("max_age"), ::dc_rest::toJsonValue(m_max_age));
    }
    if (m_created_at_isSet) {
        obj.insert(QString("created_at"), ::dc_rest::toJsonValue(m_created_at));
    }
    if (m_expires_at_isSet) {
        obj.insert(QString("expires_at"), ::dc_rest::toJsonValue(m_expires_at));
    }
    if (m_channel.isSet()) {
        obj.insert(QString("channel"), ::dc_rest::toJsonValue(m_channel));
    }
    if (m_approximate_member_count_isSet) {
        obj.insert(QString("approximate_member_count"), ::dc_rest::toJsonValue(m_approximate_member_count));
    }
    return obj;
}

QString OAIGroupDMInviteResponse::getCode() const {
    return m_code;
}
void OAIGroupDMInviteResponse::setCode(const QString &code) {
    m_code = code;
    m_code_isSet = true;
}

bool OAIGroupDMInviteResponse::is_code_Set() const{
    return m_code_isSet;
}

bool OAIGroupDMInviteResponse::is_code_Valid() const{
    return m_code_isValid;
}

qint32 OAIGroupDMInviteResponse::getType() const {
    return m_type;
}
void OAIGroupDMInviteResponse::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIGroupDMInviteResponse::is_type_Set() const{
    return m_type_isSet;
}

bool OAIGroupDMInviteResponse::is_type_Valid() const{
    return m_type_isValid;
}

OAIUserResponse OAIGroupDMInviteResponse::getInviter() const {
    return m_inviter;
}
void OAIGroupDMInviteResponse::setInviter(const OAIUserResponse &inviter) {
    m_inviter = inviter;
    m_inviter_isSet = true;
}

bool OAIGroupDMInviteResponse::is_inviter_Set() const{
    return m_inviter_isSet;
}

bool OAIGroupDMInviteResponse::is_inviter_Valid() const{
    return m_inviter_isValid;
}

qint32 OAIGroupDMInviteResponse::getMaxAge() const {
    return m_max_age;
}
void OAIGroupDMInviteResponse::setMaxAge(const qint32 &max_age) {
    m_max_age = max_age;
    m_max_age_isSet = true;
}

bool OAIGroupDMInviteResponse::is_max_age_Set() const{
    return m_max_age_isSet;
}

bool OAIGroupDMInviteResponse::is_max_age_Valid() const{
    return m_max_age_isValid;
}

QDateTime OAIGroupDMInviteResponse::getCreatedAt() const {
    return m_created_at;
}
void OAIGroupDMInviteResponse::setCreatedAt(const QDateTime &created_at) {
    m_created_at = created_at;
    m_created_at_isSet = true;
}

bool OAIGroupDMInviteResponse::is_created_at_Set() const{
    return m_created_at_isSet;
}

bool OAIGroupDMInviteResponse::is_created_at_Valid() const{
    return m_created_at_isValid;
}

QDateTime OAIGroupDMInviteResponse::getExpiresAt() const {
    return m_expires_at;
}
void OAIGroupDMInviteResponse::setExpiresAt(const QDateTime &expires_at) {
    m_expires_at = expires_at;
    m_expires_at_isSet = true;
}

bool OAIGroupDMInviteResponse::is_expires_at_Set() const{
    return m_expires_at_isSet;
}

bool OAIGroupDMInviteResponse::is_expires_at_Valid() const{
    return m_expires_at_isValid;
}

OAIInviteChannelResponse OAIGroupDMInviteResponse::getChannel() const {
    return m_channel;
}
void OAIGroupDMInviteResponse::setChannel(const OAIInviteChannelResponse &channel) {
    m_channel = channel;
    m_channel_isSet = true;
}

bool OAIGroupDMInviteResponse::is_channel_Set() const{
    return m_channel_isSet;
}

bool OAIGroupDMInviteResponse::is_channel_Valid() const{
    return m_channel_isValid;
}

qint32 OAIGroupDMInviteResponse::getApproximateMemberCount() const {
    return m_approximate_member_count;
}
void OAIGroupDMInviteResponse::setApproximateMemberCount(const qint32 &approximate_member_count) {
    m_approximate_member_count = approximate_member_count;
    m_approximate_member_count_isSet = true;
}

bool OAIGroupDMInviteResponse::is_approximate_member_count_Set() const{
    return m_approximate_member_count_isSet;
}

bool OAIGroupDMInviteResponse::is_approximate_member_count_Valid() const{
    return m_approximate_member_count_isValid;
}

bool OAIGroupDMInviteResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_inviter.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_age_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_created_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_expires_at_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_approximate_member_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGroupDMInviteResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && true;
}

} // namespace dc_rest
