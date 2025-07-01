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

#include "OAIOnboardingPromptOptionResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIOnboardingPromptOptionResponse::OAIOnboardingPromptOptionResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOnboardingPromptOptionResponse::OAIOnboardingPromptOptionResponse() {
    this->initializeModel();
}

OAIOnboardingPromptOptionResponse::~OAIOnboardingPromptOptionResponse() {}

void OAIOnboardingPromptOptionResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_emoji_isSet = false;
    m_emoji_isValid = false;

    m_role_ids_isSet = false;
    m_role_ids_isValid = false;

    m_channel_ids_isSet = false;
    m_channel_ids_isValid = false;
}

void OAIOnboardingPromptOptionResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOnboardingPromptOptionResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_title_isValid = ::dc_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_emoji_isValid = ::dc_rest::fromJsonValue(m_emoji, json[QString("emoji")]);
    m_emoji_isSet = !json[QString("emoji")].isNull() && m_emoji_isValid;

    m_role_ids_isValid = ::dc_rest::fromJsonValue(m_role_ids, json[QString("role_ids")]);
    m_role_ids_isSet = !json[QString("role_ids")].isNull() && m_role_ids_isValid;

    m_channel_ids_isValid = ::dc_rest::fromJsonValue(m_channel_ids, json[QString("channel_ids")]);
    m_channel_ids_isSet = !json[QString("channel_ids")].isNull() && m_channel_ids_isValid;
}

QString OAIOnboardingPromptOptionResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOnboardingPromptOptionResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::dc_rest::toJsonValue(m_title));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_emoji.isSet()) {
        obj.insert(QString("emoji"), ::dc_rest::toJsonValue(m_emoji));
    }
    if (m_role_ids.size() > 0) {
        obj.insert(QString("role_ids"), ::dc_rest::toJsonValue(m_role_ids));
    }
    if (m_channel_ids.size() > 0) {
        obj.insert(QString("channel_ids"), ::dc_rest::toJsonValue(m_channel_ids));
    }
    return obj;
}

QString OAIOnboardingPromptOptionResponse::getId() const {
    return m_id;
}
void OAIOnboardingPromptOptionResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIOnboardingPromptOptionResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAIOnboardingPromptOptionResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIOnboardingPromptOptionResponse::getTitle() const {
    return m_title;
}
void OAIOnboardingPromptOptionResponse::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIOnboardingPromptOptionResponse::is_title_Set() const{
    return m_title_isSet;
}

bool OAIOnboardingPromptOptionResponse::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIOnboardingPromptOptionResponse::getDescription() const {
    return m_description;
}
void OAIOnboardingPromptOptionResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIOnboardingPromptOptionResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIOnboardingPromptOptionResponse::is_description_Valid() const{
    return m_description_isValid;
}

OAISettingsEmojiResponse OAIOnboardingPromptOptionResponse::getEmoji() const {
    return m_emoji;
}
void OAIOnboardingPromptOptionResponse::setEmoji(const OAISettingsEmojiResponse &emoji) {
    m_emoji = emoji;
    m_emoji_isSet = true;
}

bool OAIOnboardingPromptOptionResponse::is_emoji_Set() const{
    return m_emoji_isSet;
}

bool OAIOnboardingPromptOptionResponse::is_emoji_Valid() const{
    return m_emoji_isValid;
}

QSet<QString> OAIOnboardingPromptOptionResponse::getRoleIds() const {
    return m_role_ids;
}
void OAIOnboardingPromptOptionResponse::setRoleIds(const QSet<QString> &role_ids) {
    m_role_ids = role_ids;
    m_role_ids_isSet = true;
}

bool OAIOnboardingPromptOptionResponse::is_role_ids_Set() const{
    return m_role_ids_isSet;
}

bool OAIOnboardingPromptOptionResponse::is_role_ids_Valid() const{
    return m_role_ids_isValid;
}

QSet<QString> OAIOnboardingPromptOptionResponse::getChannelIds() const {
    return m_channel_ids;
}
void OAIOnboardingPromptOptionResponse::setChannelIds(const QSet<QString> &channel_ids) {
    m_channel_ids = channel_ids;
    m_channel_ids_isSet = true;
}

bool OAIOnboardingPromptOptionResponse::is_channel_ids_Set() const{
    return m_channel_ids_isSet;
}

bool OAIOnboardingPromptOptionResponse::is_channel_ids_Valid() const{
    return m_channel_ids_isValid;
}

bool OAIOnboardingPromptOptionResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_role_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOnboardingPromptOptionResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_title_isValid && m_description_isValid && m_emoji_isValid && m_role_ids_isValid && m_channel_ids_isValid && true;
}

} // namespace dc_rest
