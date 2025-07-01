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

#include "OAIUserPrimaryGuildResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIUserPrimaryGuildResponse::OAIUserPrimaryGuildResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserPrimaryGuildResponse::OAIUserPrimaryGuildResponse() {
    this->initializeModel();
}

OAIUserPrimaryGuildResponse::~OAIUserPrimaryGuildResponse() {}

void OAIUserPrimaryGuildResponse::initializeModel() {

    m_identity_guild_id_isSet = false;
    m_identity_guild_id_isValid = false;

    m_identity_enabled_isSet = false;
    m_identity_enabled_isValid = false;

    m_tag_isSet = false;
    m_tag_isValid = false;

    m_badge_isSet = false;
    m_badge_isValid = false;
}

void OAIUserPrimaryGuildResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUserPrimaryGuildResponse::fromJsonObject(QJsonObject json) {

    m_identity_guild_id_isValid = ::dc_rest::fromJsonValue(m_identity_guild_id, json[QString("identity_guild_id")]);
    m_identity_guild_id_isSet = !json[QString("identity_guild_id")].isNull() && m_identity_guild_id_isValid;

    m_identity_enabled_isValid = ::dc_rest::fromJsonValue(m_identity_enabled, json[QString("identity_enabled")]);
    m_identity_enabled_isSet = !json[QString("identity_enabled")].isNull() && m_identity_enabled_isValid;

    m_tag_isValid = ::dc_rest::fromJsonValue(m_tag, json[QString("tag")]);
    m_tag_isSet = !json[QString("tag")].isNull() && m_tag_isValid;

    m_badge_isValid = ::dc_rest::fromJsonValue(m_badge, json[QString("badge")]);
    m_badge_isSet = !json[QString("badge")].isNull() && m_badge_isValid;
}

QString OAIUserPrimaryGuildResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUserPrimaryGuildResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_identity_guild_id_isSet) {
        obj.insert(QString("identity_guild_id"), ::dc_rest::toJsonValue(m_identity_guild_id));
    }
    if (m_identity_enabled_isSet) {
        obj.insert(QString("identity_enabled"), ::dc_rest::toJsonValue(m_identity_enabled));
    }
    if (m_tag_isSet) {
        obj.insert(QString("tag"), ::dc_rest::toJsonValue(m_tag));
    }
    if (m_badge_isSet) {
        obj.insert(QString("badge"), ::dc_rest::toJsonValue(m_badge));
    }
    return obj;
}

QString OAIUserPrimaryGuildResponse::getIdentityGuildId() const {
    return m_identity_guild_id;
}
void OAIUserPrimaryGuildResponse::setIdentityGuildId(const QString &identity_guild_id) {
    m_identity_guild_id = identity_guild_id;
    m_identity_guild_id_isSet = true;
}

bool OAIUserPrimaryGuildResponse::is_identity_guild_id_Set() const{
    return m_identity_guild_id_isSet;
}

bool OAIUserPrimaryGuildResponse::is_identity_guild_id_Valid() const{
    return m_identity_guild_id_isValid;
}

bool OAIUserPrimaryGuildResponse::isIdentityEnabled() const {
    return m_identity_enabled;
}
void OAIUserPrimaryGuildResponse::setIdentityEnabled(const bool &identity_enabled) {
    m_identity_enabled = identity_enabled;
    m_identity_enabled_isSet = true;
}

bool OAIUserPrimaryGuildResponse::is_identity_enabled_Set() const{
    return m_identity_enabled_isSet;
}

bool OAIUserPrimaryGuildResponse::is_identity_enabled_Valid() const{
    return m_identity_enabled_isValid;
}

QString OAIUserPrimaryGuildResponse::getTag() const {
    return m_tag;
}
void OAIUserPrimaryGuildResponse::setTag(const QString &tag) {
    m_tag = tag;
    m_tag_isSet = true;
}

bool OAIUserPrimaryGuildResponse::is_tag_Set() const{
    return m_tag_isSet;
}

bool OAIUserPrimaryGuildResponse::is_tag_Valid() const{
    return m_tag_isValid;
}

QString OAIUserPrimaryGuildResponse::getBadge() const {
    return m_badge;
}
void OAIUserPrimaryGuildResponse::setBadge(const QString &badge) {
    m_badge = badge;
    m_badge_isSet = true;
}

bool OAIUserPrimaryGuildResponse::is_badge_Set() const{
    return m_badge_isSet;
}

bool OAIUserPrimaryGuildResponse::is_badge_Valid() const{
    return m_badge_isValid;
}

bool OAIUserPrimaryGuildResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_identity_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_identity_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tag_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_badge_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUserPrimaryGuildResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
