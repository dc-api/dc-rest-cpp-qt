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

#include "OAIThumbnailComponentForMessageRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIThumbnailComponentForMessageRequest::OAIThumbnailComponentForMessageRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIThumbnailComponentForMessageRequest::OAIThumbnailComponentForMessageRequest() {
    this->initializeModel();
}

OAIThumbnailComponentForMessageRequest::~OAIThumbnailComponentForMessageRequest() {}

void OAIThumbnailComponentForMessageRequest::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_media_isSet = false;
    m_media_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_spoiler_isSet = false;
    m_spoiler_isValid = false;
}

void OAIThumbnailComponentForMessageRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIThumbnailComponentForMessageRequest::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_media_isValid = ::dc_rest::fromJsonValue(m_media, json[QString("media")]);
    m_media_isSet = !json[QString("media")].isNull() && m_media_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_spoiler_isValid = ::dc_rest::fromJsonValue(m_spoiler, json[QString("spoiler")]);
    m_spoiler_isSet = !json[QString("spoiler")].isNull() && m_spoiler_isValid;
}

QString OAIThumbnailComponentForMessageRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIThumbnailComponentForMessageRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    if (m_media.isSet()) {
        obj.insert(QString("media"), ::dc_rest::toJsonValue(m_media));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_spoiler_isSet) {
        obj.insert(QString("spoiler"), ::dc_rest::toJsonValue(m_spoiler));
    }
    return obj;
}

qint32 OAIThumbnailComponentForMessageRequest::getType() const {
    return m_type;
}
void OAIThumbnailComponentForMessageRequest::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIThumbnailComponentForMessageRequest::is_type_Set() const{
    return m_type_isSet;
}

bool OAIThumbnailComponentForMessageRequest::is_type_Valid() const{
    return m_type_isValid;
}

OAIUnfurledMediaRequest OAIThumbnailComponentForMessageRequest::getMedia() const {
    return m_media;
}
void OAIThumbnailComponentForMessageRequest::setMedia(const OAIUnfurledMediaRequest &media) {
    m_media = media;
    m_media_isSet = true;
}

bool OAIThumbnailComponentForMessageRequest::is_media_Set() const{
    return m_media_isSet;
}

bool OAIThumbnailComponentForMessageRequest::is_media_Valid() const{
    return m_media_isValid;
}

QString OAIThumbnailComponentForMessageRequest::getDescription() const {
    return m_description;
}
void OAIThumbnailComponentForMessageRequest::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIThumbnailComponentForMessageRequest::is_description_Set() const{
    return m_description_isSet;
}

bool OAIThumbnailComponentForMessageRequest::is_description_Valid() const{
    return m_description_isValid;
}

bool OAIThumbnailComponentForMessageRequest::isSpoiler() const {
    return m_spoiler;
}
void OAIThumbnailComponentForMessageRequest::setSpoiler(const bool &spoiler) {
    m_spoiler = spoiler;
    m_spoiler_isSet = true;
}

bool OAIThumbnailComponentForMessageRequest::is_spoiler_Set() const{
    return m_spoiler_isSet;
}

bool OAIThumbnailComponentForMessageRequest::is_spoiler_Valid() const{
    return m_spoiler_isValid;
}

bool OAIThumbnailComponentForMessageRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_media.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_spoiler_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIThumbnailComponentForMessageRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_media_isValid && true;
}

} // namespace dc_rest
