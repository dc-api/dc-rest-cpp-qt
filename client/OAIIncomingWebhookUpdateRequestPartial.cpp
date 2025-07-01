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

#include "OAIIncomingWebhookUpdateRequestPartial.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIIncomingWebhookUpdateRequestPartial::OAIIncomingWebhookUpdateRequestPartial(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIIncomingWebhookUpdateRequestPartial::OAIIncomingWebhookUpdateRequestPartial() {
    this->initializeModel();
}

OAIIncomingWebhookUpdateRequestPartial::~OAIIncomingWebhookUpdateRequestPartial() {}

void OAIIncomingWebhookUpdateRequestPartial::initializeModel() {

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

    m_flags_isSet = false;
    m_flags_isValid = false;
}

void OAIIncomingWebhookUpdateRequestPartial::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIIncomingWebhookUpdateRequestPartial::fromJsonObject(QJsonObject json) {

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

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;
}

QString OAIIncomingWebhookUpdateRequestPartial::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIIncomingWebhookUpdateRequestPartial::asJsonObject() const {
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
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    return obj;
}

QString OAIIncomingWebhookUpdateRequestPartial::getContent() const {
    return m_content;
}
void OAIIncomingWebhookUpdateRequestPartial::setContent(const QString &content) {
    m_content = content;
    m_content_isSet = true;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_content_Set() const{
    return m_content_isSet;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_content_Valid() const{
    return m_content_isValid;
}

QList<OAIRichEmbed> OAIIncomingWebhookUpdateRequestPartial::getEmbeds() const {
    return m_embeds;
}
void OAIIncomingWebhookUpdateRequestPartial::setEmbeds(const QList<OAIRichEmbed> &embeds) {
    m_embeds = embeds;
    m_embeds_isSet = true;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_embeds_Set() const{
    return m_embeds_isSet;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_embeds_Valid() const{
    return m_embeds_isValid;
}

OAIMessageAllowedMentionsRequest OAIIncomingWebhookUpdateRequestPartial::getAllowedMentions() const {
    return m_allowed_mentions;
}
void OAIIncomingWebhookUpdateRequestPartial::setAllowedMentions(const OAIMessageAllowedMentionsRequest &allowed_mentions) {
    m_allowed_mentions = allowed_mentions;
    m_allowed_mentions_isSet = true;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_allowed_mentions_Set() const{
    return m_allowed_mentions_isSet;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_allowed_mentions_Valid() const{
    return m_allowed_mentions_isValid;
}

QList<OAIBaseCreateMessageCreateRequest_components_inner> OAIIncomingWebhookUpdateRequestPartial::getComponents() const {
    return m_components;
}
void OAIIncomingWebhookUpdateRequestPartial::setComponents(const QList<OAIBaseCreateMessageCreateRequest_components_inner> &components) {
    m_components = components;
    m_components_isSet = true;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_components_Set() const{
    return m_components_isSet;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_components_Valid() const{
    return m_components_isValid;
}

QList<OAIMessageAttachmentRequest> OAIIncomingWebhookUpdateRequestPartial::getAttachments() const {
    return m_attachments;
}
void OAIIncomingWebhookUpdateRequestPartial::setAttachments(const QList<OAIMessageAttachmentRequest> &attachments) {
    m_attachments = attachments;
    m_attachments_isSet = true;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_attachments_Set() const{
    return m_attachments_isSet;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_attachments_Valid() const{
    return m_attachments_isValid;
}

OAIPollCreateRequest OAIIncomingWebhookUpdateRequestPartial::getPoll() const {
    return m_poll;
}
void OAIIncomingWebhookUpdateRequestPartial::setPoll(const OAIPollCreateRequest &poll) {
    m_poll = poll;
    m_poll_isSet = true;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_poll_Set() const{
    return m_poll_isSet;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_poll_Valid() const{
    return m_poll_isValid;
}

qint32 OAIIncomingWebhookUpdateRequestPartial::getFlags() const {
    return m_flags;
}
void OAIIncomingWebhookUpdateRequestPartial::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIIncomingWebhookUpdateRequestPartial::is_flags_Valid() const{
    return m_flags_isValid;
}

bool OAIIncomingWebhookUpdateRequestPartial::isSet() const {
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

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIIncomingWebhookUpdateRequestPartial::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
