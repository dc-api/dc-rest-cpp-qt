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

#include "OAIIncomingWebhookRequestPartial.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIIncomingWebhookRequestPartial::OAIIncomingWebhookRequestPartial(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIIncomingWebhookRequestPartial::OAIIncomingWebhookRequestPartial() {
    this->initializeModel();
}

OAIIncomingWebhookRequestPartial::~OAIIncomingWebhookRequestPartial() {}

void OAIIncomingWebhookRequestPartial::initializeModel() {

    m_content_isSet = false;
    m_content_isValid = false;

    m_embeds_isSet = false;
    m_embeds_isValid = false;

    m_allowed_mentions_isSet = false;
    m_allowed_mentions_isValid = false;

    m_components_isSet = false;
    m_components_isValid = false;

    m_attachments_isSet = false;
    m_attachments_isValid = false;

    m_poll_isSet = false;
    m_poll_isValid = false;

    m_tts_isSet = false;
    m_tts_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;

    m_avatar_url_isSet = false;
    m_avatar_url_isValid = false;

    m_thread_name_isSet = false;
    m_thread_name_isValid = false;

    m_applied_tags_isSet = false;
    m_applied_tags_isValid = false;
}

void OAIIncomingWebhookRequestPartial::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIIncomingWebhookRequestPartial::fromJsonObject(QJsonObject json) {

    m_content_isValid = ::dc_rest::fromJsonValue(m_content, json[QString("content")]);
    m_content_isSet = !json[QString("content")].isNull() && m_content_isValid;

    m_embeds_isValid = ::dc_rest::fromJsonValue(m_embeds, json[QString("embeds")]);
    m_embeds_isSet = !json[QString("embeds")].isNull() && m_embeds_isValid;

    m_allowed_mentions_isValid = ::dc_rest::fromJsonValue(m_allowed_mentions, json[QString("allowed_mentions")]);
    m_allowed_mentions_isSet = !json[QString("allowed_mentions")].isNull() && m_allowed_mentions_isValid;

    m_components_isValid = ::dc_rest::fromJsonValue(m_components, json[QString("components")]);
    m_components_isSet = !json[QString("components")].isNull() && m_components_isValid;

    m_attachments_isValid = ::dc_rest::fromJsonValue(m_attachments, json[QString("attachments")]);
    m_attachments_isSet = !json[QString("attachments")].isNull() && m_attachments_isValid;

    m_poll_isValid = ::dc_rest::fromJsonValue(m_poll, json[QString("poll")]);
    m_poll_isSet = !json[QString("poll")].isNull() && m_poll_isValid;

    m_tts_isValid = ::dc_rest::fromJsonValue(m_tts, json[QString("tts")]);
    m_tts_isSet = !json[QString("tts")].isNull() && m_tts_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_username_isValid = ::dc_rest::fromJsonValue(m_username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;

    m_avatar_url_isValid = ::dc_rest::fromJsonValue(m_avatar_url, json[QString("avatar_url")]);
    m_avatar_url_isSet = !json[QString("avatar_url")].isNull() && m_avatar_url_isValid;

    m_thread_name_isValid = ::dc_rest::fromJsonValue(m_thread_name, json[QString("thread_name")]);
    m_thread_name_isSet = !json[QString("thread_name")].isNull() && m_thread_name_isValid;

    m_applied_tags_isValid = ::dc_rest::fromJsonValue(m_applied_tags, json[QString("applied_tags")]);
    m_applied_tags_isSet = !json[QString("applied_tags")].isNull() && m_applied_tags_isValid;
}

QString OAIIncomingWebhookRequestPartial::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIIncomingWebhookRequestPartial::asJsonObject() const {
    QJsonObject obj;
    if (m_content_isSet) {
        obj.insert(QString("content"), ::dc_rest::toJsonValue(m_content));
    }
    if (m_embeds.size() > 0) {
        obj.insert(QString("embeds"), ::dc_rest::toJsonValue(m_embeds));
    }
    if (m_allowed_mentions.isSet()) {
        obj.insert(QString("allowed_mentions"), ::dc_rest::toJsonValue(m_allowed_mentions));
    }
    if (m_components.size() > 0) {
        obj.insert(QString("components"), ::dc_rest::toJsonValue(m_components));
    }
    if (m_attachments.size() > 0) {
        obj.insert(QString("attachments"), ::dc_rest::toJsonValue(m_attachments));
    }
    if (m_poll.isSet()) {
        obj.insert(QString("poll"), ::dc_rest::toJsonValue(m_poll));
    }
    if (m_tts_isSet) {
        obj.insert(QString("tts"), ::dc_rest::toJsonValue(m_tts));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::dc_rest::toJsonValue(m_username));
    }
    if (m_avatar_url_isSet) {
        obj.insert(QString("avatar_url"), ::dc_rest::toJsonValue(m_avatar_url));
    }
    if (m_thread_name_isSet) {
        obj.insert(QString("thread_name"), ::dc_rest::toJsonValue(m_thread_name));
    }
    if (m_applied_tags.size() > 0) {
        obj.insert(QString("applied_tags"), ::dc_rest::toJsonValue(m_applied_tags));
    }
    return obj;
}

QString OAIIncomingWebhookRequestPartial::getContent() const {
    return m_content;
}
void OAIIncomingWebhookRequestPartial::setContent(const QString &content) {
    m_content = content;
    m_content_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_content_Set() const{
    return m_content_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_content_Valid() const{
    return m_content_isValid;
}

QList<OAIRichEmbed> OAIIncomingWebhookRequestPartial::getEmbeds() const {
    return m_embeds;
}
void OAIIncomingWebhookRequestPartial::setEmbeds(const QList<OAIRichEmbed> &embeds) {
    m_embeds = embeds;
    m_embeds_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_embeds_Set() const{
    return m_embeds_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_embeds_Valid() const{
    return m_embeds_isValid;
}

OAIMessageAllowedMentionsRequest OAIIncomingWebhookRequestPartial::getAllowedMentions() const {
    return m_allowed_mentions;
}
void OAIIncomingWebhookRequestPartial::setAllowedMentions(const OAIMessageAllowedMentionsRequest &allowed_mentions) {
    m_allowed_mentions = allowed_mentions;
    m_allowed_mentions_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_allowed_mentions_Set() const{
    return m_allowed_mentions_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_allowed_mentions_Valid() const{
    return m_allowed_mentions_isValid;
}

QList<OAIBaseCreateMessageCreateRequest_components_inner> OAIIncomingWebhookRequestPartial::getComponents() const {
    return m_components;
}
void OAIIncomingWebhookRequestPartial::setComponents(const QList<OAIBaseCreateMessageCreateRequest_components_inner> &components) {
    m_components = components;
    m_components_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_components_Set() const{
    return m_components_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_components_Valid() const{
    return m_components_isValid;
}

QList<OAIMessageAttachmentRequest> OAIIncomingWebhookRequestPartial::getAttachments() const {
    return m_attachments;
}
void OAIIncomingWebhookRequestPartial::setAttachments(const QList<OAIMessageAttachmentRequest> &attachments) {
    m_attachments = attachments;
    m_attachments_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_attachments_Set() const{
    return m_attachments_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_attachments_Valid() const{
    return m_attachments_isValid;
}

OAIPollCreateRequest OAIIncomingWebhookRequestPartial::getPoll() const {
    return m_poll;
}
void OAIIncomingWebhookRequestPartial::setPoll(const OAIPollCreateRequest &poll) {
    m_poll = poll;
    m_poll_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_poll_Set() const{
    return m_poll_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_poll_Valid() const{
    return m_poll_isValid;
}

bool OAIIncomingWebhookRequestPartial::isTts() const {
    return m_tts;
}
void OAIIncomingWebhookRequestPartial::setTts(const bool &tts) {
    m_tts = tts;
    m_tts_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_tts_Set() const{
    return m_tts_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_tts_Valid() const{
    return m_tts_isValid;
}

qint32 OAIIncomingWebhookRequestPartial::getFlags() const {
    return m_flags;
}
void OAIIncomingWebhookRequestPartial::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_flags_Valid() const{
    return m_flags_isValid;
}

QString OAIIncomingWebhookRequestPartial::getUsername() const {
    return m_username;
}
void OAIIncomingWebhookRequestPartial::setUsername(const QString &username) {
    m_username = username;
    m_username_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_username_Set() const{
    return m_username_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_username_Valid() const{
    return m_username_isValid;
}

QString OAIIncomingWebhookRequestPartial::getAvatarUrl() const {
    return m_avatar_url;
}
void OAIIncomingWebhookRequestPartial::setAvatarUrl(const QString &avatar_url) {
    m_avatar_url = avatar_url;
    m_avatar_url_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_avatar_url_Set() const{
    return m_avatar_url_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_avatar_url_Valid() const{
    return m_avatar_url_isValid;
}

QString OAIIncomingWebhookRequestPartial::getThreadName() const {
    return m_thread_name;
}
void OAIIncomingWebhookRequestPartial::setThreadName(const QString &thread_name) {
    m_thread_name = thread_name;
    m_thread_name_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_thread_name_Set() const{
    return m_thread_name_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_thread_name_Valid() const{
    return m_thread_name_isValid;
}

QList<QString> OAIIncomingWebhookRequestPartial::getAppliedTags() const {
    return m_applied_tags;
}
void OAIIncomingWebhookRequestPartial::setAppliedTags(const QList<QString> &applied_tags) {
    m_applied_tags = applied_tags;
    m_applied_tags_isSet = true;
}

bool OAIIncomingWebhookRequestPartial::is_applied_tags_Set() const{
    return m_applied_tags_isSet;
}

bool OAIIncomingWebhookRequestPartial::is_applied_tags_Valid() const{
    return m_applied_tags_isValid;
}

bool OAIIncomingWebhookRequestPartial::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_embeds.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_allowed_mentions.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_components.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_attachments.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_poll.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_tts_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avatar_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_thread_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_applied_tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIIncomingWebhookRequestPartial::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
