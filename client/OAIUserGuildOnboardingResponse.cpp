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

#include "OAIUserGuildOnboardingResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIUserGuildOnboardingResponse::OAIUserGuildOnboardingResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserGuildOnboardingResponse::OAIUserGuildOnboardingResponse() {
    this->initializeModel();
}

OAIUserGuildOnboardingResponse::~OAIUserGuildOnboardingResponse() {}

void OAIUserGuildOnboardingResponse::initializeModel() {

    m_guild_id_isSet = false;
    m_guild_id_isValid = false;

    m_prompts_isSet = false;
    m_prompts_isValid = false;

    m_default_channel_ids_isSet = false;
    m_default_channel_ids_isValid = false;

    m_enabled_isSet = false;
    m_enabled_isValid = false;
}

void OAIUserGuildOnboardingResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUserGuildOnboardingResponse::fromJsonObject(QJsonObject json) {

    m_guild_id_isValid = ::dc_rest::fromJsonValue(m_guild_id, json[QString("guild_id")]);
    m_guild_id_isSet = !json[QString("guild_id")].isNull() && m_guild_id_isValid;

    m_prompts_isValid = ::dc_rest::fromJsonValue(m_prompts, json[QString("prompts")]);
    m_prompts_isSet = !json[QString("prompts")].isNull() && m_prompts_isValid;

    m_default_channel_ids_isValid = ::dc_rest::fromJsonValue(m_default_channel_ids, json[QString("default_channel_ids")]);
    m_default_channel_ids_isSet = !json[QString("default_channel_ids")].isNull() && m_default_channel_ids_isValid;

    m_enabled_isValid = ::dc_rest::fromJsonValue(m_enabled, json[QString("enabled")]);
    m_enabled_isSet = !json[QString("enabled")].isNull() && m_enabled_isValid;
}

QString OAIUserGuildOnboardingResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUserGuildOnboardingResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_guild_id_isSet) {
        obj.insert(QString("guild_id"), ::dc_rest::toJsonValue(m_guild_id));
    }
    if (m_prompts.size() > 0) {
        obj.insert(QString("prompts"), ::dc_rest::toJsonValue(m_prompts));
    }
    if (m_default_channel_ids.size() > 0) {
        obj.insert(QString("default_channel_ids"), ::dc_rest::toJsonValue(m_default_channel_ids));
    }
    if (m_enabled_isSet) {
        obj.insert(QString("enabled"), ::dc_rest::toJsonValue(m_enabled));
    }
    return obj;
}

QString OAIUserGuildOnboardingResponse::getGuildId() const {
    return m_guild_id;
}
void OAIUserGuildOnboardingResponse::setGuildId(const QString &guild_id) {
    m_guild_id = guild_id;
    m_guild_id_isSet = true;
}

bool OAIUserGuildOnboardingResponse::is_guild_id_Set() const{
    return m_guild_id_isSet;
}

bool OAIUserGuildOnboardingResponse::is_guild_id_Valid() const{
    return m_guild_id_isValid;
}

QList<OAIOnboardingPromptResponse> OAIUserGuildOnboardingResponse::getPrompts() const {
    return m_prompts;
}
void OAIUserGuildOnboardingResponse::setPrompts(const QList<OAIOnboardingPromptResponse> &prompts) {
    m_prompts = prompts;
    m_prompts_isSet = true;
}

bool OAIUserGuildOnboardingResponse::is_prompts_Set() const{
    return m_prompts_isSet;
}

bool OAIUserGuildOnboardingResponse::is_prompts_Valid() const{
    return m_prompts_isValid;
}

QSet<QString> OAIUserGuildOnboardingResponse::getDefaultChannelIds() const {
    return m_default_channel_ids;
}
void OAIUserGuildOnboardingResponse::setDefaultChannelIds(const QSet<QString> &default_channel_ids) {
    m_default_channel_ids = default_channel_ids;
    m_default_channel_ids_isSet = true;
}

bool OAIUserGuildOnboardingResponse::is_default_channel_ids_Set() const{
    return m_default_channel_ids_isSet;
}

bool OAIUserGuildOnboardingResponse::is_default_channel_ids_Valid() const{
    return m_default_channel_ids_isValid;
}

bool OAIUserGuildOnboardingResponse::isEnabled() const {
    return m_enabled;
}
void OAIUserGuildOnboardingResponse::setEnabled(const bool &enabled) {
    m_enabled = enabled;
    m_enabled_isSet = true;
}

bool OAIUserGuildOnboardingResponse::is_enabled_Set() const{
    return m_enabled_isSet;
}

bool OAIUserGuildOnboardingResponse::is_enabled_Valid() const{
    return m_enabled_isValid;
}

bool OAIUserGuildOnboardingResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_guild_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prompts.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_channel_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUserGuildOnboardingResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_guild_id_isValid && m_prompts_isValid && m_default_channel_ids_isValid && m_enabled_isValid && true;
}

} // namespace dc_rest
